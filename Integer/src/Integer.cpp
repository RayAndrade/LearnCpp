//============================================================================
// Name        : Integer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 9 - Integer Variable Types
//============================================================================

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int value1 = 1000000000;
	cout << value1 << endl;

	int value2 = 10000000000;
	long value3 = 10000000000;

	cout << "value2" << value2 << endl;
	cout << "value3" << value3 << endl;

	cout << "Miximun int value: " << INT_MAX << endl;
	cout << "Minimum int value: " << INT_MIN << endl;

	cout << "Size of int " << sizeof(int) << endl;
	cout << "Size of short int " << sizeof(short int) << endl;
	cout << "Size of unsigned int " << sizeof(unsigned int) << endl;
	return 0;
	// study : https://www.tutorialspoint.com/c_standard_library/limits_h.htm;
}
