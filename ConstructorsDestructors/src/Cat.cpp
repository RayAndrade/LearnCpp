/*
 * Cat.cpp
 *
 *  Created on: Jan 29, 2020
 *      Author: ray
 */
#include <iostream>
#include "Cat.h"


using namespace std;

Cat::Cat(){
	cout << "Hello" << endl;
	happy = false;
};

Cat::~Cat(){
	cout << "Destroyed" << endl;
};

void Cat::speak(){
	if(happy){
		cout << "I am happy :)" << endl;
	} else {
		cout << "I am sad :(" << endl;
	}
};


