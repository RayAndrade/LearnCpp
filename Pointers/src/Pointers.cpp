//============================================================================
// Name        : Pointers.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 37 - Pointers; Where C++ Starts to Get Tricky
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pValue){
	cout << "2 .in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. in manipulate: " << *pValue << endl;
}

int main() {


	int n = 8;

	int *pointer = &n;

	cout << "Int value: " << n << endl;
	cout << "&val value: " << pointer << endl;
	cout << "*val value: " << *pointer << endl;

	cout << "==============================" << endl;

	double dValue = 123.4;

	cout << "1. d: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. d: " << dValue << endl;

	return 0;
}
