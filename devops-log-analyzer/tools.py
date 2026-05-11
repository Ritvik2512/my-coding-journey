from crewai.tools import tool
from crewai_tools import FileReadTool
from ddgs import DDGS

# ── Tool 1: FileReadTool (unchanged) ────────────────────────────────────────
log_reader_tool = FileReadTool()


# ── Tool 2: DuckDuckGo Search (free, no API key) ────────────────────────────
@tool("Web Search")
def ddg_search_tool(query: str) -> str:
    """Search the web for information about a given query using DuckDuckGo.
    Returns a summary of the top results including titles, URLs, and snippets.
    Use this to find documentation, solutions, and community answers for DevOps issues."""
    try:
        with DDGS() as ddgs:
            results = list(ddgs.text(query, max_results=6))

        if not results:
            return f"No results found for: {query}"

        output = f"Search results for: '{query}'\n\n"
        for i, r in enumerate(results, 1):
            output += f"{i}. {r.get('title', 'No title')}\n"
            output += f"   URL: {r.get('href', 'No URL')}\n"
            output += f"   {r.get('body', 'No snippet')}\n\n"

        return output

    except Exception as e:
        return f"Search failed: {str(e)}. Try a different query or check your internet connection."