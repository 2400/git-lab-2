 # CS 2400/2401 Git/GitHub Lab
 ### Prepared by: Nasseef Abukamail (abukamai@ohio.edu)

----

**You must complete the [first lab](https://github.com/2400/git-lab) prior to attempting this lab.**

**We will use VSCode in all the examples, but you can use your favorite editor.**
###

## Conflicts

In the previous lab, we discussed editing the same file online and on your local copy. This simulates having two people editing the same file/repository.  At some point, conflicts may occur.

From this point on, you will be working with a partner. Both of you will be working on the same repository. You will be referred to as `first` and `second` team member.

We will work on the files in this repository to practice resolving conflicts. The files describe a simple `Die` class. The class is not complete. We will complete it in this lab.

1. `first`: create a repository on GitHub called `first-lab` with a `README.md` and a `.gitignore` file for C++. Add Second team member as a collaborator.
2. Each team member: Clone this repository on your system
3. `first`: Edit the `README.md` file by adding the following lines:
   ```markdown
   # Git Lab #2
   ## First team member: <Enter your name here>
   ```
4. `first`: Add, commit, and push your changes to GitHub.
   
5. `second`: Edit the `README.md` file by adding the following lines:
   ```markdown
   # The second Git Lab
   ## Second team member: <Enter your name here>
   ```
4. `second`: Add, commit, and push your changes to GitHub. Record the error as your `Answer to Qustion 1`.
5. Git is telling you the online version is different from the local version of the repository. You need to `pull` the changes to your local repositories.
6. Issue the command: `git pull`
7. Issue the `git push` command again. Was there a conflict reported? Copy the output of the command as your `Answer to question 2`
8. You just experienced a conflict. A conflict happens when both collaborators edit the same lines in the code.
9. Your repo
10. `second`: Open the `README.md` file. You should see something similar to the following:
   ```
   <<<<<<< HEAD
   # The second Git lab
   ## Second team member: second name
   =======
   # Git Lab #2
   ## First team member: first name
   >>>>>>> a10ec650cc73b85f41e37559df7fc6cb3affcac6
   ```
   Git separates your changes (between `<<<<<<< HEAD` and `=======`) from your teammate's changes(between `=======` and `>>>>>>>`). You job at this point is resolve this conflict by editing the file and make the appropriate changes. Modify the text to the following:
   ```
   # The second Git lab
   ## First team member: first name
   ## Second team member: second name
   ```

11. Repeat steps `3-10` above by reversing the roles. Edit line 4 instead. Record `Answers 3 & 4`
    



