//============================================================================
// Name        : Const.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 44 - Const; a Vital Tool for Reducing Bugs
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;

public:
	void setName(string name){ this->name = name; };
	void speak() const {cout << "Hi I am " << name << endl;};
};


int main() {

	const double PI = 3.14592;
	cout << PI << endl;
	Animal animal;
	animal.setName("Pete");
	animal.speak();

	int value = 8;
	//const int * const pValue = &value;
	//int *const pValue = &value;
	//const int* pValue = &value;

	int pValue = value;
	//cout << &pValue << "" << endl;
	int number = 11;
	//pValue = &number;
	//*pValue = 12;

	//cout << *pValue << "" << endl;



	return 0;
}
