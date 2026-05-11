import os
from typing import Any

from crewai import Task
from crewai.tasks.task_output import TaskOutput
from pydantic import BaseModel, Field

from agents import issue_investigator, log_analyzer, solution_specialist

os.makedirs("task_outputs", exist_ok=True)


class LogAnalysisReport(BaseModel):
    primary_issue: str = Field(description="One-line description of the main issue")
    root_cause: str = Field(description="Root cause analysis based on log evidence")
    errors: list[str] = Field(description="All errors found in the log")
    affected_components: list[str] = Field(description="System components affected")
    timeline: list[str] = Field(description="Sequence of events leading to failure")


def validate_log_analysis(result: TaskOutput) -> tuple[bool, Any]:
    """Code guardrail: ensures the analysis found actual errors."""
    report = result.pydantic
    if not report or not report.errors:
        return (False, "Must identify at least one error")
    return (True, report)


analyze_logs_task = Task(
    description="""Analyze the log file at {log_file_path} to identify and extract specific issues.
    
    Your analysis should:
    1. Read through the entire log file carefully
    2. Identify ALL ERROR, CRITICAL, and WARNING messages — do not skip any
    3. Extract the main issue or failure pattern
    4. Determine the timeline of events leading to the failure
    5. Identify the root cause from the log entries
    
    Focus on finding the primary issue that needs to be resolved.""",
    expected_output="A structured log analysis report with errors, root cause, and timeline",
    output_pydantic=LogAnalysisReport,
    guardrail=validate_log_analysis,
    agent=log_analyzer,
    output_file="task_outputs/log_analysis.md",
)

investigate_issue_task = Task(
    description="""Based on the log analysis findings from the previous agent, investigate the identified issue online.
    
    Your investigation should:
    1. Search specifically for the primary issue and root cause identified in the analysis
    2. Find official documentation related to the exact errors found
    3. Look for community solutions and best practices for this specific error
    4. Identify common causes and scenarios for this type of issue
    5. Gather information about proven fixes and workarounds
    
    Stay focused on the specific errors passed to you — do not investigate unrelated issues.""",
    expected_output="""A comprehensive investigation report including:
    - Common causes ranked by likelihood
    - Known solutions and best practices
    - Recommended fixes and workarounds""",
    agent=issue_investigator,
    context=[analyze_logs_task],
    output_file="task_outputs/investigation_report.md",
)

provide_solution_task = Task(
    description="""Based on the log analysis and investigation findings passed to you, provide a complete solution.
    
    Your solution MUST:
    1. Address the exact primary issue and root cause from the analysis — do not solve unrelated problems
    2. Create a step-by-step remediation plan with specific commands for the exact errors identified
    3. Provide verification steps to confirm the fix worked
    4. Suggest monitoring and prevention measures specific to this issue

    If your solution does not directly address the primary issue from the analysis, it is wrong.""",
    expected_output="A detailed remediation plan with step-by-step commands targeting the specific identified issue",
    guardrail="The solution must include at least 3 specific, copy-pasteable shell commands. "
    "Reject if it only contains general advice without concrete commands.",
    agent=solution_specialist,
    context=[analyze_logs_task, investigate_issue_task],
    output_file="task_outputs/solution_plan.md",
)