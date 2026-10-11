# Contribution and Organization Guidelines

These guidelines keep the repository consistent and useful for revision.

## File and Folder Naming

- Use lowercase kebab-case for topic folders and filenames.
- Start problem filenames with the four-digit LeetCode ID.
- Use the language-specific extension: `.py`, `.cpp`, or `.java`.
- Store a problem under its primary topic. Mention secondary patterns in the file header or notes.

## Solution Header

Every solution should record:

- Problem title and LeetCode ID
- Official problem URL
- Difficulty and primary topic
- Approach summary
- Time complexity
- Space complexity

Use `templates/` as the starting point.

## Quality Checklist

Before treating a solution as complete:

- [ ] The implementation follows the required LeetCode signature.
- [ ] The approach is understood and written in your own words.
- [ ] Empty, minimal, duplicate, boundary, or other relevant edge cases were considered.
- [ ] Time and space complexity are stated accurately.
- [ ] The code was run or submitted where practical.
- [ ] No full problem statement or editorial has been copied into the repository.

## Commits

Prefer small, descriptive commits, such as:

- `feat(python): add two-sum solution`
- `docs: update binary search notes`
- `test(arrays): cover empty input edge case`
