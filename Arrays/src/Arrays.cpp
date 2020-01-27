//============================================================================
// Name        : Arrays.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 20 - Arrays
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Array if ints:" << endl;
	cout << "=============" << endl;

	int values[3];
	values[0] = 88;
	//values[1] = 77;
	values[2] = 66;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl;
	cout << endl << "Array if doubles:" << endl;
	cout << "=============" << endl;

	double numbers[4] = { 44.1, 33.2, 22.3, 11.4 };

	cout << "for loop" << endl;
	for(int i = 0; i < 4; i++){
		cout << numbers[i] << endl;
	}
	cout << "=============" << endl;

	cout << numbers[0] << endl;
	cout << numbers[1] << endl;
	cout << numbers[2] << endl;
	cout << numbers[3] << endl;

	cout << "=============" << endl;
	int numbesAray[8] = {1,2,3,4,5,6,7,8};
	for(int i = 0; i < 7; i++){
		cout << numbesAray[i] << endl;
	}
	cout << "=============" << endl;

	string texts[] = {"apple", "orange", "banna"};

	for(int i = 0; i < 3; i++){
		cout << texts[i] << endl;
	}

	return 0;
}
