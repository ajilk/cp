# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is a competitive programming (CP) knowledge base built with Fumadocs (Next.js-based documentation framework). It contains LeetCode problem solutions, data structure implementations, algorithm explanations, and coding patterns for technical interview preparation. The content is written in MDX with embedded Python code snippets, and is published as a static site at cp.ajilk.com.

## Build and Development

### Install dependencies
```bash
bun install
```

### Serve locally with live reload
```bash
bun run dev
```

This starts a local development server (typically at http://localhost:3000) with automatic reloading when files change.

### Build for production
```bash
bun run build
```

This generates a static export in the `out/` directory.

### Preview production build
```bash
bun run start
```

### Type checking and linting
```bash
bun run types:check  # Regenerates MDX types and runs TypeScript type checking
bun run lint         # Runs ESLint
```

Note: `fumadocs-mdx` runs automatically after `bun install` via the postinstall hook to generate TypeScript types from MDX content.

## Project Structure

- `src/app/` - Next.js App Router
  - `[[...slug]]/page.tsx` - Dynamic docs page renderer (docs at root path)
  - `layout.tsx` - Root layout with DocsLayout wrapper
  - `api/search/route.ts` - Search API endpoint
- `src/lib/` - Shared utilities
  - `source.ts` - Content source adapter (baseUrl: '/')
  - `layout.shared.tsx` - Shared layout configuration
- `content/docs/` - All documentation content
  - `meta.json` - Navigation structure for root
  - `{category}/meta.json` - Navigation for each category
- `.source/` - Auto-generated (gitignored)
- `out/` - Production build output (gitignored)

## Content Structure

The repository follows this organization:

- `content/docs/introduction.md` - Introduction page
- `content/docs/naming.md` - Variable naming conventions
- `content/docs/functions.md` - Useful functions reference
- `content/docs/data_structures/` - Reference implementations of common data structures
- `content/docs/algorithms/` - Algorithm implementations and explanations
- `content/docs/patterns/` - Problem-solving patterns (prefix sum, two-pointer, backtracking, etc.)
- `content/docs/leetcode/` - LeetCode problem solutions organized by category (array, matrix, linked list, tree, graph, dp, etc.)
- `content/docs/misc/` - Miscellaneous topics (mathematical formulas, etc.)

### File Organization Pattern

Each content file follows this pattern:
- MDX/Markdown file with frontmatter (e.g., `content/docs/leetcode/array/146.md`)
- Python code is embedded directly in the markdown file using code blocks

When a problem has multiple solutions, include all approaches in the same markdown file with descriptive headers (e.g., "#### using dictionary", "#### using doubly linked list").

### Navigation Structure

Navigation is controlled by `meta.json` files in each directory:
- `pages` array defines the order of pages
- Use `"---Section Name---"` for section headers
- Use `"...(folder)"` to auto-expand folder contents
- Icons use Lucide icon names (e.g., "Database", "Code", "Binary")

Example:
```json
{
  "title": "Data Structures",
  "icon": "Database",
  "pages": [
    "sll",
    "dll",
    "graph"
  ]
}
```

## Naming Conventions

This repository follows strict naming conventions for coding variables to optimize solving speed and reduce cognitive overhead. Key conventions from `content/docs/naming.md`:

- `A` - array/list
- `M` - matrix
- `m`, `n` - dimensions (rows/columns)
- `i`, `j` or `y`, `x` - matrix indices
- `G` - graph
- `a`, `b` - edges
- `head`, `tail`, `dummy` - linked list pointers
- `slow`, `fast` - two-pointer technique
- `pre`, `cur`, `nxt` - previous/current/next nodes
- `p`, `q`, `node` - tree nodes
- `q` - queue
- `heap`, `h` - heap
- `d`, `hm` - dictionary/hashmap
- `uf` - union find
- `dp`, `cache`, `memo` - dynamic programming
- `dfs()`, `bfs()` - depth/breadth first search
- `helper()`, `fn()` - helper functions

When adding new code, adhere to these conventions for consistency.

## Adding New Content

### Adding a LeetCode problem

1. Determine the appropriate category (array, matrix, linked list, tree, graph, dp, backtracking, math)
2. Create the markdown file in the appropriate subdirectory: `content/docs/leetcode/{category}/{number}.md`
3. Add the problem to `content/docs/leetcode/{category}/meta.json` in the appropriate section
4. Use this template for the markdown:

```markdown
---
title: {number}. {Problem Title}
---


```python
class Solution:
    def methodName(self, params) -> ReturnType:
        # Solution code here
        pass
```

| Metric           | Complexity | Reason                    |
| ---------------- | ---------- | ------------------------- |
| Time Complexity  | $O(...)$   | Explanation               |
| Space Complexity | $O(...)$   | Explanation               |
```

For problems with multiple solutions, include all approaches in the same file with descriptive headers:

```markdown
#### using dictionary
```python
# First approach
```

#### using doubly linked list
```python
# Second approach
```
```

### Adding a data structure or algorithm

1. Create markdown in `content/docs/data_structures/{name}.md` or `content/docs/algorithms/{name}.md`
2. Embed Python implementation directly in the markdown file using code blocks
3. Update the appropriate `meta.json` file to include the new page
4. Link related LeetCode problems at the bottom

## Deployment

The repository auto-deploys to GitHub Pages when changes are pushed to the `main` branch via `.github/workflows/deploy.yml`. The workflow:
1. Sets up Bun runtime
2. Installs dependencies with `bun install`
3. Runs `bun run build` to create static export
4. Deploys the `out/` directory to GitHub Pages

Do not manually edit files in the `out/` or `.source/` directories as they are auto-generated.

## Configuration Files

- `source.config.ts` - Fumadocs MDX configuration with KaTeX support for math
- `next.config.mjs` - Next.js config with static export enabled
- `mdx-components.tsx` - MDX component mappings
- `src/lib/source.ts` - Content source with baseUrl: '/'
- `package.json` - Dependencies and scripts

## Math Support

The project has KaTeX enabled for mathematical formulas. Use standard LaTeX syntax:

Inline: `$E = mc^2$`
Block:
```
$$
\sum_{i=1}^{n} i = \frac{n(n+1)}{2}
$$
```
