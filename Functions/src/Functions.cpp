//============================================================================
// Name        : Functions.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 25 - Functions: Using Subroutines in C++
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View a record" << endl;
	cout << "3. Quit" << endl;
}

void processSelection(){
	cout << "Enter a selection:" << flush;

	int input;
	cin >> input;

	switch(input){
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting" << endl;
		break;
	default:
		cout << "Please select on item from the menu" << endl;
	}

}

int main() {

	showMenu();
	processSelection();

	return 0;
}
