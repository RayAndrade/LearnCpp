//============================================================================
// Name        : NewOperator.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 46 - The New Operator; Allocating Memory in C++
//				 C++Tutorial for Beginners 47 - Returning Objects from Functions
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

	Animal *pAnimal =  new Animal();
	//Animal a;
	pAnimal->setName("Bert");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;

	return 0;
}
