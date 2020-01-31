//============================================================================
// Name        : CopyConstructors.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 45 - Copy Constructors; Creating Copies of Objects
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() { cout << "being created" << endl; };
	Animal(const Animal &other): name(other.name) { other.speak(); cout << "animal being created via copy" << endl; };

	void setName(string name){ this->name = name; };
	void speak() const {cout << "Hello I am " << name << endl;};
};


int main() {

	Animal animal1;
	animal1.setName("Dave");

	Animal animal2 = animal1;
	animal2.speak();

	animal2.setName("Tim");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);

	animal3.speak();

	return 0;
}
