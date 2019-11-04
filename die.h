/**  die.h
  *      Author: Add your names here
  *   Date: Add the current date
  * Description: This class simulates a die.
  *
  */
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
     * to 6, and assign a random value (1-numsides) to faceValue
     */
    Die();

    /**
     * Die constructor:
     * Seed the random number generator, set the number of sides
     * to newNumSides, and assign a random value (1-numsides) to faceValue
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
     * setNumSides: change the number of the die sides and ignore it if invalie
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
