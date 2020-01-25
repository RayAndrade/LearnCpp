//============================================================================
// Name        : If.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 12 - The "If" Statement
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password = "hello";
	cout << "Enter your password: " << flush;

	string input;
	cin >> input;

	cout << "You typed: " << "'" << input << "'" << endl;

	if(input == password){
		cout << "you got in!" << endl ;
	}
	if (input != password){
		cout << "I do not know you!" << endl;
	}
	return 0;
}
