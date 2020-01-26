//============================================================================
// Name        : Do-While.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 17 - The Do-While Loops
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const string password = "hello";
	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;
		if(input != password){
			cout << "Access denied" << endl;
		}

	} while (input != password);

	cout << "Password accepted" << endl;

	return 0;
}
