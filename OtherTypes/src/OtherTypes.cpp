//============================================================================
// Name        : OtherTypes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 11 - Char and Bool
//============================================================================

#include <iostream>
using namespace std;

int main() {
	bool bValue = true;
	cout << "bValue: " << bValue << endl;

	char cValue = 105;
	cout << "cValue: " << cValue << endl;

	char cValue1 = 'd';
	cout << "cValue1: " << cValue1 << endl;
	cValue1 =100;
	cout << "cValue1: " << cValue1 << endl;
	cout << "cast cValue1: " << (int)cValue1 << endl;

	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
