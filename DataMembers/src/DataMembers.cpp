//============================================================================
// Name        : DataMembers.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 30 - Data Members, a.k.a. Instance Variables
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	Cat jim;
	Cat bob;

	//jim.happy = false;
	jim.speak();
	jim.makeHappy();

	//bob.happy = true;
	bob.makeSad();
	bob.speak();

	return 0;
}
