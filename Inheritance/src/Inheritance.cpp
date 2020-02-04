//============================================================================
// Name        : Inheritance.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 51 - Inheritance
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	void speak(){
		cout << "Hello" << endl;
	}
};
class Cat: public Animal{
public:
	void jump(){
		cout << "jumping" << endl;
	}
};

class Tigar: public Cat{
public:
	void speak(){
	cout << "Roar!!" << endl;
	}
	void attact(){
		cout << "attacking!!" << endl;
	}
};


int main() {
	Animal a;
	a.speak();
	//a.jump(); -- error

	Cat c;
	c.speak();
	c.jump();

	Tigar t;
	t.speak();
	t.attact();
	t.jump();


	return 0;
}
