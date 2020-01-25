//============================================================================
// Name        : Input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 7 - User Input
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string text = "Hello";
	cout << text << endl;

	cout << "Enter your name " << flush;
	string input;
	cin >> input;

	cout << "Hello " << input << endl;

	int value;
	cout << "Enter a number" << flush;
	cin >> value;
	cout << "You entered " << value << endl;

}
