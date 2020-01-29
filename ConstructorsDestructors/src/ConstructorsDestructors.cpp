//============================================================================
// Name        : ConstructorsDestructors.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 31 - Constructors and Destructors
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting Program" << endl;

	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending Program" << endl;
	return 0;
}
