//============================================================================
// Name        : Namespaces.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 50 - Namespaces; Organise Your Classes
//============================================================================

#include <iostream>
#include "Animals.h"
#include "Cat.h"

using namespace std;
using namespace rla;


int main() {
	Cat cat;
	cat.speak();

	rla::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << rla::CATNAME << endl;
	cout << cats::CATNAME << endl;

	return 0;
}
