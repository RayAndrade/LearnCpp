//============================================================================
// Name        : SizeOfMultidimensional.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 23 - Sizeof Multidimensional Arrays
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string animals[][3] = {
			{"fox", "dog","cat"},
			{"mouse", "squirrel","parrot"}
	};

	cout << sizeof(string) << endl;
	cout << sizeof(animals)  << endl; //I get 192?? they get 48
	cout << sizeof(animals[0])  << endl; // I get 94 they get 24
	cout << sizeof(animals[1])  << endl;

	for (unsigned int i =0; i < sizeof(animals)/sizeof(animals[0]); i++){
		for(unsigned int j=0; j< sizeof(animals[0])/sizeof(string); j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
