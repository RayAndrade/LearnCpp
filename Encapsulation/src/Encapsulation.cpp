//============================================================================
// Name        : Encapsulation.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 52 - Encapsulation
//============================================================================

#include <iostream>
using namespace std;

class Frog{
private:
	string name;
	string getName(){ return name;}

public:
	Frog(string name): name(name){}
	//string getName(){ return name;}
	void info() { cout << "My name is " << getName() << endl;}
};

int main() {


	Frog frog("Freddy");

	//cout << frog.getName() << endl;
	frog.info();
	return 0;

}
