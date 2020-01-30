//============================================================================
// Name        : This.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 35 - The "this" Keyword; A First Taste of Pointers
//               C++Tutorial for Beginners 36 - Constructor Initialization Lists
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person1;

	Person person2("Ray", 16);
	Person person3("Tim", 96);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
