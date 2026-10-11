# Complexity Analysis Quick Reference

Complexity depends on the algorithm and underlying operations; these are common reference points, not universal guarantees for every implementation.

| Complexity | Typical interpretation |
|---|---|
| `O(1)` | Constant work |
| `O(log n)` | Repeatedly reduce the search space, often by half |
| `O(n)` | One pass over the input |
| `O(n log n)` | Common comparison-based sorting complexity |
| `O(n²)` | Compare/process pairs or use two nested linear loops |
| `O(2ⁿ)` | Explore subsets or a branching search in the worst case |
| `O(n!)` | Explore permutations in the worst case |

## Analyze a Solution

1. Define what `n` represents.
2. Count how often each loop or recursive branch runs.
3. Include the cost of operations inside loops (for example, searching a list is not generally `O(1)`).
4. State auxiliary space separately from input storage when that distinction matters.
5. For recursion, account for both the number of calls and maximum call-stack depth.
6. State average-case assumptions when relying on expected hash-table performance.

## Per-Problem Record

- Time complexity:
- Auxiliary space complexity:
- Reasoning:
- Any average-case assumptions:
