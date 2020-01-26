//============================================================================
// Name        : If-elseif.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 14 - Choosing Between Alternatives: If-ElseIf-Else
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "1. Add Record\t\t 1" << endl;
	cout << "2. Delete Record\t 2" << endl;
	cout << "3. View Record\t\t 3" << endl;
	cout << "4. Search for record\t 4" << endl;
	cout << "5. Quit\t\t\t 5" << endl;

	cout << "Enter your selection > " << flush;
	int value;

	cin >> value;
	if (value == 1) {
		cout << "Added new record..." << endl;
	} else if (value == 2) {
		cout << "Deleting record..." << endl;
	} else if (value == 3) {
		cout << "Veiwing record..." << endl;
	} else if (value == 4) {
		cout << "Searching records..." << endl;
	} else if (value == 5) {
		cout << "Quitting..." << endl;
	} else {
		cout << "Invalid option..." << endl;
	}

	return 0;
}
