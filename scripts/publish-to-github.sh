#!/usr/bin/env bash
set -euo pipefail

REPOSITORY="worksomaganesh/leetcode-solutions"
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

for command in git gh; do
  if ! command -v "$command" >/dev/null 2>&1; then
    echo "Required command not found: $command" >&2
    echo "Install Git and GitHub CLI (gh), then try again." >&2
    exit 1
  fi
done

gh auth status

if [ ! -d .git ]; then
  git init -b main
fi

git add -A
if ! git rev-parse --verify HEAD >/dev/null 2>&1; then
  git commit -m "chore: initialize LeetCode solutions repository"
elif ! git diff --cached --quiet; then
  git commit -m "chore: add LeetCode repository scaffold"
fi

if gh repo view "$REPOSITORY" >/dev/null 2>&1; then
  echo "Repository $REPOSITORY already exists. No repository was created." >&2
  echo "Review its contents and configure the remote manually before pushing." >&2
  exit 2
fi

read -r -p "Repository visibility [public/private] (default: public): " VISIBILITY
VISIBILITY="${VISIBILITY:-public}"
if [[ "$VISIBILITY" != "public" && "$VISIBILITY" != "private" ]]; then
  echo "Visibility must be 'public' or 'private'." >&2
  exit 1
fi

gh repo create "$REPOSITORY" "--$VISIBILITY" --source=. --remote=origin --push

echo "Published: https://github.com/$REPOSITORY"
