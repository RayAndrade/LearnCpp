//============================================================================
// Name        : NewOperator.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 46 - The New Operator; Allocating Memory in C++
//============================================================================

#include <iostream>
using namespace std;

class Animal {

private:
	string name;

public:
	Animal() {
		cout << "Animal created" << endl;
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

Animal *createAnimal(){
	Animal *a = new Animal;
	a->setName("Tom");
}

int main() {

	Animal cat;
	cat.setName("Felix");
	cat.speak();

	Animal *pCat1 = new Animal();
	(*pCat1).setName("man-do");
	(*pCat1).speak();

	Animal *pCat2 = new Animal();
	pCat2->setName("Mat");
	pCat2->speak();

	cout << sizeof(pCat2) << endl;
	// same size of long
	cout << sizeof(long) << endl;


	delete pCat2;
	//pCat2 = NULL;



	return 0;
}
