# LeetCode Solutions

A structured, language-aware collection of LeetCode solutions for data structures and algorithms practice, interview preparation, and revision.

> **Guiding principle:** prioritize clear reasoning, correct edge-case handling, and complexity analysis over the number of problems solved.

## Progress

| Metric | Count |
|---|---:|
| Total solved | 0 |
| Easy | 0 |
| Medium | 0 |
| Hard | 0 |

These counts are a starter dashboard. Update them as you add and verify solutions.

## Repository Structure

```text
leetcode-solutions/
├── README.md
├── CONTRIBUTING.md
├── .gitignore
├── solutions/
│   ├── python/
│   ├── cpp/
│   └── java/
├── docs/
│   ├── roadmap.md
│   ├── patterns.md
│   ├── complexity-analysis.md
│   └── interview-notes.md
├── tests/
│   ├── python/
│   ├── cpp/
│   └── java/
├── templates/
│   ├── solution-template.py
│   ├── solution-template.cpp
│   └── SolutionTemplate.java
└── scripts/
    └── publish-to-github.sh
```

Each language directory uses the same topic-first organization so that solutions remain easy to find as the collection grows.

## Topics

- Arrays
- Strings
- Hashing
- Two Pointers
- Sliding Window
- Binary Search
- Linked Lists
- Stacks and Queues
- Trees
- Heaps
- Graphs
- Backtracking
- Dynamic Programming
- Greedy Algorithms
- Intervals
- Tries
- Bit Manipulation
- Math and Geometry

## Solution Naming Convention

Use the LeetCode problem ID, followed by a lowercase kebab-case title:

```text
solutions/python/arrays/0001-two-sum.py
solutions/cpp/arrays/0001-two-sum.cpp
solutions/java/arrays/0001-two-sum.java
```

Keep one primary solution per problem and language. Put alternative approaches in clearly named variants or in the related notes.

## What Each Solution Should Document

1. Problem name, ID, official URL, difficulty, and topic.
2. A short explanation of the approach in your own words.
3. Time and space complexity.
4. The implementation using the signature expected by LeetCode.
5. Optional edge cases or a better alternative when they add learning value.

Do not copy full problem statements. Link to the official problem instead.

## Learning Notes

- [DSA Roadmap](docs/roadmap.md)
- [Algorithm Patterns](docs/patterns.md)
- [Complexity Analysis](docs/complexity-analysis.md)
- [Interview Notes](docs/interview-notes.md)

## Local Validation

Keep problem-specific tests under `tests/<language>/` when useful. Test edge cases as well as the main example before marking a solution complete.

## LeetCode Profile

Add your LeetCode profile URL here when ready.

---

This repository is a personal learning record. Solutions should reflect your own understanding and be reviewed periodically as you learn better approaches.
