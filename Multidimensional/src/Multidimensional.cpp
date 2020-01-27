//============================================================================
// Name        : Multidimensional.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 21 - Multidimensional Arrays
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string animals[2][3]{
		{ "fox", "dog", "cat"},
		{"fish","snake","bird"}
	};

	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
