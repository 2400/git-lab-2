 # CS 2400/2401 Git/GitHub Lab
 ### Prepared by: Nasseef Abukamail (abukamai@ohio.edu)

----

**You must complete the [first lab](https://github.com/2400/git-lab) prior to attempting this lab.**

 

## Conflicts

In the previous lab, we discussed editing the same file online and in your local repository. This simulates having two people editing the same file/repository.  At some point, conflicts may occur.

From this point on, you will be working with a partner. Both of you will be working on the same repository. You will be referred to as `first` and `second` team member. 

__Both team members__: 

You will be working on files in the repository to practice resolving conflicts. You will be createing a class header, class implementation, a driver, and a Makefile. You will be testing a class called `Die`. 

1. `first`: Create a repository on GitHub called `die-class` with a `README.md` and a `.gitignore` file for C++.
2. Add `second` team member as a collaborator. You will need their GitHub user name.
3. Each team member: Clone `die-class` repository on your system. You will be recording your answers in `first-answers.md` and `second-answers.md`.
   
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
10. `second:` Issue the command: `git pull`
11. `second:` Issue the `git push` command again. Was there a conflict reported? Copy the output of the command as your `Answer to question 2`
You just experienced a conflict. A conflict happens when both collaborators edit the same lines in the code.
12. `second`: Open the `README.md` file. You should see something similar to the following:
   ```markdown
   <<<<<<< HEAD
   <your changes here>
   =======
   <your partner's changes here>
   >>>>>>> a10ec650cc73b85f41e37559df7fc6cb3affcac6
   ```
   Git separates your changes (between `<<<<<<< HEAD` and `=======`) from your teammate's changes(between `=======` and `>>>>>>>`). You job at this point is resolve this conflict by editing the file and make the appropriate changes. Modify the text to the following:
   ```
   # The second Git lab
   ## First team member: first name
   ## Second team member: second name
   ```

15. `second`: Edit the `README.md` file by adding the following line (line 4):
    ```markdown
    This repository is an example of a C++ project.
    ```
    Add, commit, and push your changes.

16. `first`: Make sure `second` is done with step 11 first then edit the `README.md` file by adding the following line (line 4):
     ```markdown
    Die class project. Simulates a die and includes a driver program and a Makefile. 
    ```
    Add, commit, and push your changes to GitHub. Record the error as your Answer to Qustion 1.
17. `first`: Git is telling you the online version is different from the local version of the repository. You need to `pull` the changes to your local repositories.
18. `first`: Issue the command: `git pull`
19. `first`: Issue the `git push` command again. Was there a conflict reported? Copy the output of the command as your `Answer to question 2`
20. You just experienced a conflict. A conflict happens when both collaborators edit the same lines in the code.
21. `first`: Open the `README.md` file. You should see something similar to the following:
   ```markdown
   <<<<<<< HEAD
   <Your changes here>
   =======
   <your partner's changes here>
   >>>>>>> a10ec650cc73b85f41e37559df7fc6cb3affcac6
   ```
   Git separates your changes (between `<<<<<<< HEAD` and `=======`) from your teammate's changes(between `=======` and `>>>>>>>`). You job at this point is resolve this conflict by editing the file and make the appropriate changes. Modify the text to the following:
   ```
   # The second Git lab
   ## First team member: first name
   ## Second team member: second name
   ### Die Project: simulates the rolling of a die with certain number of sides.
   ```

## Branching & Pull Requests
The main repository is called the `master` branch. Whe working with teams, you want to avoid working directly on the master branch. It is better to work on a copy of the repository and merge it with the master branch. First, you will work on your repository using a separate branch and merge it with the master. Second, we you will work on a separate branch and have your teammate review your changes before merging (`pull request`).

### Branching
**The following steps must be done by both `first`**
1. List current branches by issuing the command `git branch`. Record the results as your `Answer to question 5`
2. Create a new branch and make it the current branch.
   ```console
   git branch header
   git checkout header
   or
   git checkout -b header
   ```
3. List current branches
   ```
   git branch
   ```
   Record the command output of `git branch` as your `Answer to question 6`
   > Note: current branch is marked with `*`

4. Now you are working with branch `header`. Add a file called `die.h`, add the following code, and save it.
   ```cpp
   #ifndef DIE_H
   #define DIE_H
   #include <iostream>
   #include <fstream>

   using namespace std;

   class Die {
   public:
       /**
        * Die constructor:
        * Seed the random number generator, set the number of sides
        * to 6, and assign a random value (1-numSides) to faceValue
        */
       Die();

       /**
        * Die constructor:
        * Seed the random number generator, set the number of sides
        * to newNumSides, and assign a random value (1-numSides) to faceValue
        */
       Die(int newNumSides);

       /**
        * getFaceValue
        * @return the face value of the die
        */
       int getFaceValue();

       /**
        * getNumSides
        * @return the number of sides of the die
        */
       int getNumSides();

       /**
        * setNumSides: change the number of the die sides and ignore it if invalid
        * @param newNumSides
        */
       void setNumSides(int newNumSides);

       /**
        * roll: assign a new random value to the die face
        * @return the face value assigned
        */
       int roll();

       /**
        * operator <<, overloads the insertion operator to print
        * the face value of the die.
        * @return the stream used
        */
       friend ostream& operator <<(ostream &out, const Die &d);
   private:
       int faceValue; ///the face value of the die
       int numSides;  ///number of faces of the die
   };

   #endif
   ```
5. Add and commit the new file
6. Issue the `ls` command and record all file names as your `Answer to question 6`.
7. Swith back to the `master` branch:
   ```console
   git branch master
   ```
8. Issue the `ls` command again and record all file names as your `Answer to question 7`.
9. Is your header file in the `master` branch?
10. Let's merge the changes we made in the `header` branch into the `master` branch. First make sure you are in the master branch before merging.
```console
git checkout master
git merge header
```
11. Issue the `ls` command again. You should see `die.h` file in the repository directory.
12. Push your changes to `GitHub`

**The following steps must be done by both `second`**

Repeat the steps above `1-12`. Name your branch `imp` and add the file `die.cc` with the following content:
```cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "die.h"
using namespace std;

//Constructors
Die::Die(){ //default 6 sides
    numSides = 6;
    srand(time(NULL));
    faceValue = rand() % numSides + 1;

}

Die::Die(int newNumSides){
    if (newNumSides > 0) {
        numSides = newNumSides;

    }
    else {
        numSides = 6;
    }
    srand(time(NULL));
    faceValue = rand() % numSides + 1;
}

//setters
void Die::setNumSides(int newNumSides){
    if (newNumSides > 0) {
        numSides = newNumSides;
    }
}

//getters
int Die::getFaceValue(){
    return faceValue;
}
int Die::getNumSides(){
    return numSides;
}

//helper functions
int Die::roll(){
    faceValue = rand() % numSides + 1;
    return faceValue;
}

ostream& operator <<(ostream &out, const Die &d){
    out << d.faceValue;
    return out;
}
```
__Both teammates__: Make sure you have no conflicts and both or your changes are posted on GitHub.

### Pull Requests

In this workflow, each team member will modify the code (using a separate branch) and ask the other team member to review it and merge it to the `master` branch. The process works by first creating a new branch, adding/modifying the code, uploading the branch to GitHub, and creating a `pull request`. A `pull request` is our way of saying: we made modifications that should be added to the software and would like the code to be pulled into the master branch. A `pull request` is then reviewed, discussed, and either rejected or merged into the `master` branch of the code. 

This is a very common workflow for teams working on the same repository.

`first`: 
1. Open a terminal window and cd to your repository on your machine. Create a new branch and name it `driver`. You will create a driver program called `die-main.cc`. 
2. Make sure that you are editing the `driver` branch by issuing the command `git branch`
3. Add the following lines of code inside `die-main.cc`:
```cpp
/*
 *      Author: <enter your name>
 *        Date: <enter the date>
 * Description: Add Description
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;
//function prototypes

int main() {

    Die d;
    cout << "Face value: "<< d << endl;
    Die d12(12);
    cout << "Face value: "<< d12 << endl;
    d12.setNumSides(24);
    for (size_t i = 0; i < 6; i++) {
        cout << "Roll: " << d12.roll() << endl;
    }
    return 0;
}
```
Add your name, date, and a brief description at the top of the program.
3. Add and commit your changes. You should have a new branch with the new file added.
4. Push your branch to GitHub.
5. Go to GitHub and create a pull request for your branch. Leave a comment to your partner to review it, comment on it, and merge it to the `master` branch.
6. Do not delete the branch when you're done.

`second`: 

 Open a terminal window and cd to your repository on your machine. Create a new branch and name it `make`. You will create a file called `Makefile`. 
2. Make sure that you are editing the `make` branch by issuing the command `git branch`
3. Add the following lines of code inside `Makefile`:
```Makefile
# Author: <Enter your name>
#   Date: <Enter the date>
#
# Makefile for the die project
# All commands under the rules must start with a tab

#Variables
CFLAGS = -Wall -std=c++11
CC = g++
#Linking all the files
#Create the executable program "die-main"
die-main: die-main.o die.o
	$(CC) $(CFLAGS) die.o die-main.o -o die-main

die.o: die.cc die.h
	$(CC) -c $(CFLAGS) die.cc

die-main.o: die-main.cc die.h
	$(CC) -c $(CFLAGS) die-main.cc

# remove all the object and executable files
clean:
	rm -f die-main.o die.o die-main
```

Add your name and date at the top of the program.
2. Test your program by running the `make` command and running `a.out`.

3. Add and commit your changes. You should have a new branch with the new file added.
4. Push your branch to GitHub.
5. Go to GitHub and create a pull request for your branch. Leave a comment to your partner to review it, comment on it, and merge it to the `master` branch.
6. Do not delete the branch when you're done.

__That's it. You just experienced the most common workflow used today__

### Submission

__Submit a link to your shared repository on GitHub.__



