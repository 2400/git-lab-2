[⏪ Branching and PR Overview](003-branching-and-pr.md) | [Pull Requests ⏩](005-pull-requests.md)

### Branching

Branching is the process of copying the `master` branch of a repository into another branch with a different name. Braching allows you to work on the project without affecting the `master` branch. You can, later, merge your changes to the `master` branch.

**The following steps must be done by `first`**

1. List current branches by issuing the command `git branch` (you can exit this view by pressing `q`). Record the results as your `Answer to question 3`
2. Create a new branch and make it the current branch.
   ```console
   git branch header
   git checkout header
   ```
   Or create a new branch and switch to it using the single command:
   ```console
   git checkout -b header
   ```
3. List current branches

   ```console
   git branch
   ```

   Record the command output of `git branch` as your `Answer to question 4`

   > Note: current branch is marked with **`*`**

4. Now you are working with branch `header`. Add a file called `die.h` with the following content, and save it.

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
6. Issue the `ls` command and record all file names as your `Answer to question 5`.
7. Switch back to the `master` branch:
   ```console
   git checkout master
   ```
8. Issue the `ls` command again and record all file names as your `Answer to question 6`.
9. Is your header file in the `master` branch? Record your `Answer to question 7`
10. Let's merge the changes we made in the `header` branch into the `master` branch. First make sure you are in the master branch before merging.

```console
git checkout master
git merge header
```

11. Issue the `ls` command again. You should see `die.h` file in the repository directory.
12. Push your changes to `GitHub`

**The following steps must be done by `second`**

Repeat the **Branching** steps above `1-12`. Name your branch `implement` and add the file `die.cc` with the following content:

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
    if (newNumSides > 1) {
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
    if (newNumSides > 1) {
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

**Both teammates**: Make sure you have no conflicts and both of your changes are posted on GitHub. All local and online repositories should be synched at this point.

The above workflow does not work when your teammate's input is required to approve the changes. In other words, this workflow works best if you don't have a partner.

In the next section, we will addres another workflow where each partner has to approve and comment on changes made to the repository. This a more realistic approach to team work. We will do this using **pull requests**.

[⏪ Branching and PR Overview](003-branching-and-pr.md) | [Pull Requests ⏩](005-pull-requests.md)
