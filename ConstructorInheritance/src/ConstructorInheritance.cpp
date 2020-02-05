//============================================================================
// Name        : ConstructorInheritance.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 53 - Constructor Inheritance
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;

public:
	Machine(): id(0){ cout << "Machine no-arg constructor called." << endl; }
	Machine(int id): id(id){ cout << "Machine with-arg constructor called." << endl; }
	void info(){ cout << "id is:" << id << endl;}
};

class Vehical : public Machine {
public:
	Vehical(int id): Machine(id){ cout << "Vehical with-arg constructor called." << endl; }
	Vehical(){ cout << "Vehical no-arg constructor called." << endl; }

};

class Car: public Vehical{
public:
	Car():Vehical(999){ cout << "Car no-arg constructor called." << endl; }
};

int main() {
	Machine machine(123);
	machine.info();


	Car car;
	car.info();


	Vehical vehical;
	vehical.info();


	return 0;
}
