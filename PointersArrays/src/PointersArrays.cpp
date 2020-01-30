//============================================================================
// Name        : PointersArrays.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 39 - Pointers and Arrays
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = {"one", "two", "three" };

	string *pTexts = texts;

	cout << sizeof(texts)/sizeof(string) << endl;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << " " << flush;
	}
	cout << endl;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << *pTexts << " " << flush;
		pTexts++;
	}
	cout << endl;

	//for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++){
	//	cout << *pTexts << " " << flush;
	//}

	string *pElement= &texts[0];
	string *pEnd = &texts[2];

	while(true){
		cout << *pElement << " " << flush;

		if(pElement == pEnd){
			break;
		}
		pElement++;
	}

	return 0;
}

































