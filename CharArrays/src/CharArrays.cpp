//============================================================================
// Name        : CharArrays.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 41 - Char Arrays: Primitive Strings in C++
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//char text[] = {'H', 'E', 'L', 'L', 'O'};
	char text[] = {"hello"};

	for(int i=0; i<sizeof(text); i++){
		cout << text[i] << flush;
	}
	cout <<endl;

	for(int i=0; i<sizeof(text); i++){
		cout << i << " : " << text[i] << " : " << (int)text[i]<< endl;
	}

	cout << text << endl;

	int k = 0;

	while(true){
		if(text[k]== 0){
			break;
		}

		cout << text[k] << flush;
		k++;
	}


	return 0;
}
