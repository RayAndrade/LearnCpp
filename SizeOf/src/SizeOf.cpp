//============================================================================
// Name        : SizeOf.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 22 - Sizeof and Arrays
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {4, 7, 3, 4};

	for(int i=0; i<4; i++){
		cout << values[i] << " " << endl;
	}
	cout << "==============================" << endl;
	for(unsigned int i=0; i< sizeof(values)/sizeof(values); i++){
		cout << values[i] << " " << endl;
	}
	cout << "==============================" << endl;

	return 0;
}
