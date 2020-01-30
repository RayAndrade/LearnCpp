//============================================================================
// Name        : This.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 35 - The "this" Keyword; A First Taste of Pointers
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person1;
	Person person2("Ray", 16);
	Person person3("Tim", 96);

	//cout << person1.toString() << &person1 << endl;
	cout << person2.toString() << &person2 << endl;
	cout << person3.toString() << &person3 <<  endl;

	return 0;
}
