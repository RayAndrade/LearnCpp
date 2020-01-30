//============================================================================
// Name        : Arithmetic.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 38 - Arithmetic Operators
//============================================================================

// types +, -, *, /, +=, -=, /=, *=, %, %=

#include <iostream>
using namespace std;

int main() {

	int value1 = 7/3;
	cout << value1 << endl;

	double value2 = 7/3;
	cout << value2 << endl;

	float value3 = 7/3;
	cout << value3 << endl;

	double value4 = 7.0/3;
	cout << value4 << endl;

	double value5 = (double)7/3;
	cout << value5 << endl;

	int value6 = 7.3;
	cout << value6 << endl;

	int value7 = 7.9;
	cout << value7 << endl;

	value7 +=2;
	cout << value7 << endl;

	int value8 = 12%5;
	cout << value8 << endl;

	double x = 3 * 4 -2;
	double y = (3 * 4) -2;
	double z = 3 * (4 -2);

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}
