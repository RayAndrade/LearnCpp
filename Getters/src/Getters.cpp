//============================================================================
// Name        : Getters.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 32 - Getters and Setters
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person;

	person.setName("Cecil");

	cout << person.toString() << endl;

	cout << "Using get :" << person.getName() << endl;

	return 0;
}
