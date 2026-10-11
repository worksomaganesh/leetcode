# Publish This Scaffold to GitHub

The connected GitHub editing interface used to prepare this template cannot create a brand-new repository directly. This scaffold is ready to publish under `worksomaganesh/leetcode-solutions`.

## Option A — GitHub CLI (recommended on a computer)

1. Install [Git](https://git-scm.com/) and [GitHub CLI](https://cli.github.com/).
2. Sign in once with `gh auth login`.
3. Extract this ZIP and open a terminal in the extracted folder.
4. Run `bash scripts/publish-to-github.sh`.
5. Choose `public` or `private` when prompted. The script checks whether the target repository already exists before creating it.

## Option B — Create the Repository on GitHub

1. Open https://github.com/new while signed in as `worksomaganesh`.
2. Name it `leetcode-solutions` and choose visibility.
3. Leave “Add a README”, `.gitignore`, and license unchecked so that the repository starts empty.
4. Upload the extracted scaffold contents or push them using Git.

Do not publish API tokens, passwords, private data, or credentials in this repository.
