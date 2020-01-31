//============================================================================
// Name        : ReversingAString.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 42 - Reversing a String (Interview Question!)
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "if i had a hi fi";

	int nChars = sizeof(text) - 1;

	char *pStart = text;
	char *pEnd = text + nChars -1;

	cout << *pEnd << endl;

	while(pStart < pEnd){

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}
	cout << text << endl;


	return 0;
}
