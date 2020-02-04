//============================================================================
// Name        : NewOperator.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 46 - The New Operator; Allocating Memory in C++
//				 C++Tutorial for Beginners 47 - Returning Objects from Functions
//
//============================================================================

#include <iostream>
using namespace std;

class Animal {

private:
	string name;

public:
	Animal() {
		cout << "Animal created by copying" << endl;
	}

	Animal(const Animal &other):
		name(other.name) {
		cout << "Animal created by copy" << endl;
	}
	~Animal(){
		cout << "Destructor called" << endl;
	}

	void setName(string name){
		this->name = name;
	}

	void speak(){
		cout << "My name is " << name << endl;
	}
};



int main() {

	int *pInt = new int;

	*pInt = 8;
	cout << *pInt << endl;

	delete pInt;

	Animal *pAnimal =  new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	char *pMem = new char[1000];
	delete [] pMem;

	return 0;
}




















