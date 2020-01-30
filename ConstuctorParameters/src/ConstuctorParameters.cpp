//============================================================================
// Name        : ConstuctorParameters.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 34 - Overloading Constructors
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person peson1;
	Person peson2("Ray");
	Person peson3("Tim", 25);

	cout << peson1.toString() << endl;
	cout << peson2.toString() << endl;
	cout << peson3.toString() << endl;
	return 0;
}
