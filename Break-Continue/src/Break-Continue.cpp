//============================================================================
// Name        : Break-Continue.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 19 - Break and Continue
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*
	for( int i =0 ; i<5 ; i++){
		cout << "i is :" << i << endl;
		if(i == 3){
			break;
		}
		cout << "looping..." << endl;
	}
	*/

//	for( int i =0 ; i<5 ; i++){
//			cout << "i is :" << i << endl;
//			if(i == 3){
//				continue;
//			}
//			cout << "looping..." << endl;
//		}
//
//	cout << "Quitting" << endl;
	const string password = "hello";
	string input;

	do {
		cout << "Enter your password > " << flush;
		cin >> input;
		if(input == password){
			break;
		} else {
			cout << "Access denied" << endl;
		}

	} while (true);

	cout << "Password accepted" << endl;


	return 0;
}
