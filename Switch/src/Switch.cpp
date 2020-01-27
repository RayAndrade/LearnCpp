//============================================================================
// Name        : Switch.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 24 - Switch: Choosing Between Alternatives
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value; // = 5;
	bool b = true;
	const int c = 4;

	while (b) {
		cin >> value;

		switch (value) {
		case c:
			cout << "Value is 4." << endl;
			break;
		case 5:
			cout << "Value is 5." << endl;
			break;
		case 6:
			cout << "Value is 6." << endl;
			break;
		default:
			cout << "unreconized value" << endl;
		}
		b=false;
	}
	return 0;
}
