# LeetCode Solutions Repository

## Overview
This repository hosts my solutions to (https://leetcode.com/UgamThakkar) problems, implemented primarily in C++, Java and Python. The goal is to document my problem-solving journey, focusing on algorithmic challenges, optimization, and clear code documentation.

## Features
- **Problem Solutions**: Organized by LeetCode problem number and title.
- **Languages Used**: Primarily C++/Java and Python, with potential for other languages.
- **Documentation**: Each solution includes:
  - Problem description.
  - Solution approach and logic.
  - Time and space complexity analysis.
- **Testing**: All solutions are tested for correctness on LeetCode.

## Repository Structure
- **Files**: Solutions are stored as individual files (e.g., `289_Game_of_Life.cpp`).
- **Naming Convention**: Files follow the format `[ProblemNumber]_[ProblemName].[extension]`.
- **Comments**: Code includes detailed comments explaining the approach and key steps.

## Sample Solution
### 289. Game of Life (Medium)
- **Description**: Update a board in-place based on Conway's Game of Life rules:
  - Live cell with <2 live neighbors dies (underpopulation).
  - Live cell with 2-3 live neighbors lives.
  - Live cell with >3 live neighbors dies (overpopulation).
  - Dead cell with exactly 3 live neighbors becomes alive (reproduction).
- **Solution**: Implemented in C++ using temporary states (`-1` for alive-to-dead, `2` for dead-to-alive) for in-place updates.
- **Commit Message**: "Implement LeetCode 289 Game of Life to update a board in-place per rules: live cell with <2 or >3 live neighbors dies, 2-3 lives; dead cell with 3 live neighbors becomes alive, returning next state."

### 1236. Web Crawler (Medium)
- **Description**: Crawl all unique URLs under the same hostname as `startUrl` using `HtmlParser`. Rules: start from `startUrl`, avoid duplicates, and only include same-hostname URLs.
- **Solution**: C++ using BFS with a queue and unordered_set to track visited URLs, extracting hostnames with string manipulation.
- **Commit Message**: "Implemented LeetCode 1236 Web Crawler to crawl unique URLs under the same hostname using BFS."

## Usage
- Browse the repository to find solutions by problem number or title.
- Each file contains the problem statement, solution code, and complexity analysis.
- Clone or fork the repository to explore or contribute.

## Objectives
- Solve a diverse range of LeetCode problems (Easy, Medium, Hard).
- Optimize solutions for performance and readability.
- Build a resource for learning and sharing algorithmic knowledge.

## Contributing
- Suggestions or improvements are welcome via pull requests or issues.
- Feel free to share alternative approaches or optimizations.

## Contact
- GitHub: (https://github.com/UgamThakkar)
- LeetCode: (https://leetcode.com/UgamThakkar)
- Linkedin: (https://www.linkedin.com/in/ugamthakkar/)
- Reach out for collaboration or feedback!