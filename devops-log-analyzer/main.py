import warnings
import logging

warnings.filterwarnings("ignore")
logging.disable(logging.CRITICAL)

from crewai import Crew, Process

from agents import issue_investigator, log_analyzer, solution_specialist
from tasks import analyze_logs_task, investigate_issue_task, provide_solution_task

import os

task_counter = {"i": 0}

def on_task_done(task):
    i = task_counter["i"]

    if i == 0:
        # Pull error count from pydantic output if available
        try:
            count = len(task.pydantic.errors)
            summary = f"{count} error(s) found"
        except:
            summary = "done"
        print(f"  ✅ [1/3] Done — {summary}\n")
        print("  ⏳ [2/3] Agent 2 — Searching for solutions...")

    elif i == 1:
        print(f"  ✅ [2/3] Done — Investigation complete\n")
        print("  ⏳ [3/3] Agent 3 — Writing remediation plan...")

    elif i == 2:
        print(f"  ✅ [3/3] Done\n")

    task_counter["i"] += 1


devops_crew = Crew(
    agents=[log_analyzer, issue_investigator, solution_specialist],
    tasks=[analyze_logs_task, investigate_issue_task, provide_solution_task],
    verbose=False,
    process=Process.sequential,
    task_callback=on_task_done,
)

if __name__ == "__main__":
    log_path = r"dummy_logs\kubernetes_deployment_error.log"

    print("=" * 52)
    print("   DevOps Log Analyzer — Powered by Ollama")
    print("=" * 52)
    print(f"\n  📂 Log file: {os.path.basename(log_path)}\n")
    print("  ⏳ [1/3] Agent 1 — Analyzing log file...")

    result = devops_crew.kickoff(inputs={"log_file_path": log_path})

    print("=" * 52)
    print("   ✅ Analysis complete!")
    print("=" * 52)
    print("\n  📁 Results saved to task_outputs/:")
    print("     → log_analysis.md          (errors & root cause)")
    print("     → investigation_report.md   (web research findings)")
    print("     → solution_plan.md          (step-by-step fix)")
