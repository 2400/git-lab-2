[⬅ Conflicts](001-conflicts.md) | [Branching & Pull Request Overview ⮕](003-branching-and-pr.md)

## Undoing Changes (Files/Commits)

Each team member will complete the following section independently.

One of the most important features of git is its ability to recover older versions of files or repositories. Git keeps track of the repository history through its commits. Each commit is identified by a unique hexadecimal id/hash number (example: `e72f52ae4336d16d1affef8a0dc5162039022db2`). To see all commit history, execute the command `git log`. You should see something similar to the following:

```console
commit e72f52ae4336d16d1affef8a0dc5162039022db2 (HEAD -> master, origin/master)
Author: Nasseef Abukamail <abukamai@ohio.edu>
Date:   Sat Nov 9 11:23:58 2019 -0500

    added save function

commit 3102d1072568e9a4648c51c762ff7cba3e9b3f9a
Author: Nasseef Abukamail <abukamai@ohio.edu>
Date:   Fri Nov 8 21:35:44 2019 -0500

    All options work but does not save data

commit 71a215c6be3feee130c30341fc0c8d193b54bb74
Author: Nasseef Abukamail <abukamai@ohio.edu>
Date:   Fri Nov 8 21:35:16 2019 -0500

    added a sample input file
```

The id is generally used to revert your repository to a previous state. Additionally, they can be used to recover a single file instead. Let's try some of these commands.

#### Revert to a Previous Commit

- Add another file to your repository and add some text to it and save it.
- Issue the `ls` command to make sure your file is listed.
- Add and commit your changes
- Issue the `git log`. You should see your commits (latest on top)
- Let's say you changed your mind and you want to revert to the previous commit
  - Copy the id of the second commit in the list and use it in the following command. You can just copy the first 7-8 characters.
    ```console
    git reset <id>
    ```
    Undo the commit and keep the changes. The following command will undo the commit and remove the changes:
    ```console
    git reset --hard <id>
    ```
- Issue the `git log` again and the previous commit should no longer be present.

#### Undo Changes to a Single File

- Edit the `README.md` file and add a couple of lines text.
- Add and commit your changes
- Reset the file to a previous version:

  ```console
  git checkout -- README.md
  ```

  > Restore from the last commit

  ```console
  git checkout <id> -- README.md
  ```

- Verify that the file has been restored.

[⬅ Conflicts](001-conflicts.md) | [Branching & Pull Request Overview ⮕](003-branching-and-pr.md)
