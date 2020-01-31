//============================================================================
// Name        : PointerArithmetic.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 40 - Pointer Arithmetic; Adding, Subtracting and Comparing Pointers
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = {"one", "two", "three", "four", "six"};
	string *pTexts = texts;

	cout << *pTexts << endl;

	pTexts++;
	cout << *pTexts << endl;

	pTexts++;
	cout << *pTexts << endl;

	pTexts--;
	cout << *pTexts << endl;

	//string *pEnd = texts[NSTRINGS];
	cout << texts[NSTRINGS-1] << endl;

	pTexts = &texts[0];

	string *pEnd = &texts[NSTRINGS];

	long elements = (long)(pEnd-pTexts);
	cout << elements << endl;

	pTexts += NSTRINGS/2;

	cout << *pTexts << endl;

	return 0;
}
