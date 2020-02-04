//============================================================================
// Name        : ArraysAndFunctions.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 49 - Arrays and Functions
//============================================================================

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){

	//cout << sizeof(texts)<< endl; returns size of pointer

	for(int i = 0; i<nElements; i++){
		cout << texts[i] << " " << flush;
	}
	cout << endl;
}

void show2(const int nElements, string *texts){

	for(int i = 0; i<nElements; i++){
		cout << texts[i] << " " << flush;
	}
	cout << endl;
}

void show3(string (&texts)[3]){

	for(int i = 0; i<sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << " " << flush;
	}
	cout << endl;
}

string *getArray(){

	string texts[] = {"one", "two", "three"};
	return texts;
}

char *getMem(){
	char *pMem= new char[100];
	return pMem;
}

void freeMem(char *pMem){
	delete [] pMem;
}

int main() {

	string texts[] = {"apple", "orange", "banana"};
	cout << sizeof(texts)<< endl;


	show1(3, texts);
	show2(3, texts);
	show3(texts);

	char *pMemory = getMem();
	//delete [] pMemory;
	freeMem(pMemory);

	return 0;
}
