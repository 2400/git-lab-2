[⏪ Branching ](004-branching.md) | [Submission ⏩](006-submission.md)

### Pull Requests

In this workflow, each team member will modify the code (using a separate branch) and ask the other team member to review it and merge it to the `master` branch. The process works by first creating a new branch, adding/modifying the code, uploading the branch to GitHub, and creating a `pull request`. A `pull request` is our way of saying: we made modifications that should be added to the software and would like the code to be pulled into the master branch. A `pull request` is then reviewed, discussed, and either rejected or merged into the `master` branch. It is a bad idea to merge your own pull requests. Always, have someone else review it and merge it.

This is a common workflow for teams working on the same repository.
![pull-request.jpg](img/pull-request.jpg)
You can find more information about GitHub workflow [here](https://guides.github.com/introduction/flow/).

`first`:

1. Open a terminal window and move to your repository directory on your machine. Create a new branch and name it `driver`. You will create a driver program called `die-main.cc`.
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

4. Add and commit your changes. You should have a new branch with the new file added.
5. Push your branch to GitHub. Try the command `git push` first. You should see a corrected command in the error message. This recommended command is required the first time you push a new branch.
6. Go to GitHub and create a pull request for your branch. Leave a comment to your partner to review it, comment on it, and merge it to the `master` branch.
   ![pr-create.jpg](img/pr-create.jpg)

---

![pr-create2.jpg](img/pr-create2.jpg)

---

![pr-merge.jpg](img/pr-merge.jpg)

7. Do not delete the branch when you're done.

`second`:
Open a terminal window and cd to your repository on your machine. Create a new branch and name it `makef`. You will create a file called `Makefile`.

1. Issue the command `git pull` to make sure you have the latest branch of the repository.

2. Make sure you are editing the `makef` branch by issuing the command `git branch`.

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
#Create the executable program "a.out"
a.out: die-main.o die.o
	$(CC) $(CFLAGS) die.o die-main.o

die.o: die.cc die.h
	$(CC) -c $(CFLAGS) die.cc

die-main.o: die-main.cc die.h
	$(CC) -c $(CFLAGS) die-main.cc

# remove all the object and executable files
clean:
	rm -f die-main.o die.o die-main a.out
```

3. Add your name and date at the top of the program.
4. Test your program by running the `make` command and running `./a.out`.
5. Add and commit your changes. You should have a new branch with the new file added.
6. Push your branch to GitHub. Try the command `git push` first. You should see a corrected command in the error message. This recommended command is required the first time you push a new branch.

7. Go to GitHub and create a pull request for your branch. Leave a comment to your partner to review it, comment on it, and merge it to the `master` branch.
8. Do not delete the branch when you're done.

[⏪ Branching ](004-branching.md) | [Submission ⏩](006-submission.md)
