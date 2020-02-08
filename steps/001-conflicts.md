[Undoing ⮕](002-undoing.md)

## Conflicts

In the previous lab, we discussed editing the same file online and in your local repository which simulated having two people editing the same file. Conflicts occur when two developers edit the same content (same lines of code in the same file).

From this point on, you will be working with a partner. Both of you will be working on the same repository. You will be referred to as `first` and `second` team member.

**Both team members**:

You will be working on files in the same repository to practice resolving conflicts. You will be createing a `die class` project that includes a class header, a class implementation, a driver, and a Makefile. The `Die` class will simulates an `n-sided` die.

1. `first`: Create a repository on GitHub called `die-class` with a `README.md` and a `.gitignore` file for C++.
   > A `.gitignore` file lists all the files that you don't want to include in a repository. For example, the executable file `a.out`.
2. Add `second` team member as a collaborator. You will need their GitHub user name. Click on the repository `Settings > Collaborators`.
3. Both team members: Clone `die-class` repository on your system. You will be recording your answers in `first-answers.md` and `second-answers.md`.

4. `first`: Create your answers file `first-answers.md`, add, and commit it.
5. `second`: Create your answers file `second-answers.md`, add, and commit it.
6. `first`: Erase the content of the `README.md` file and add the following lines at the top of the file (lines 1 and 2):
   ```
   # Git Lab #2
   ## First team member: <Enter your name here>
   ```
7. `first`: Add, commit, and push your changes to GitHub.

8. `second`: Make sure `first` is done with the previous step. Erase the content of the `README.md` file and add the following lines at the top of the file (lines 1 and 2):
   ```
   # The second Git Lab
   ## Second team member: <Enter your name here>
   ```
9. `second`: Add, commit, and push your changes to GitHub. Record the error as your `Answer to Qustion 1`.
   Git is telling you the online version is different from the local version of the repository. You need to `pull` the changes to your local repositories.
10. `second:` Issue the command: `git pull`. Was there a conflict reported? Copy the output of the command as your `Answer to question 2`. You just experienced a conflict. A conflict happens when both collaborators edit the same lines in the code.

11. `second`: Open the `README.md` file in your favorite editor. You should see something similar to the following:

```markdown
<<<<<<< HEAD
<your changes here>
=======
<your partner's changes here>

> > > > > > > a10ec650cc73b85f41e37559df7fc6cb3affcac6
```

Git separates your changes (between `<<<<<<< HEAD` and `=======`) from your teammate's changes (between `=======` and `>>>>>>>`). You job at this point is resolve this conflict by editing the file and make the appropriate changes. Modify the text to the following:

```
# The second git lab
## First team member: first name
## Second team member: second name
This repository is an example of a C++ project.
```

Add, commit, and push your changes.

13. `first`: Make sure `second` is done with the previous step then edit the `README.md` file by adding the following line (line 4) to `README.md`:
    ```markdown
    Die class project. It simulates a die and includes a driver program.
    ```
    Add, commit, and push your changes to GitHub. Record the error as your `Answer to Qustion 1`.
14. `first`: Git is telling you the online version is different from the local version of the repository. You need to `pull` the changes to your local repositories.
15. `first`: Issue the command: `git pull`
16. `first`: Issue the `git push` command again. Was there a conflict reported? Copy the output of the command as your `Answer to question 2`. You just experienced a conflict. A conflict happens when both collaborators edit the same lines in the code.
17. `first`: Open the `README.md` file. You should see something similar to the following:

```markdown
<<<<<<< HEAD
<Your changes here>
=======
<your partner's changes here>

> > > > > > > a10ec650cc73b85f41e37559df7fc6cb3affcac6
```

Git separates your changes (between `<<<<<<< HEAD` and `=======`) from your teammate's changes(between `=======` and `>>>>>>>`). You job at this point is resolve this conflict by editing the file and make the appropriate changes. Modify the text to the following:

```
# The second Git lab
## First team member: first name
## Second team member: second name
### Die Project: simulates the rolling of a die with a specified number of sides.
```

18. Add, commit, and push your changes to GitHub.
19. `second`: Make sure `first` is done with the previous command and `git pull` the changes to your local repository.

**At this point both teammates should have the same content on on their local repositories and on GitHub. Check the repositories contents before proceeding the next step.**

[Undoing ⮕](002-undoing.md)
