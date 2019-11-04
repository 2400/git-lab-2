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
