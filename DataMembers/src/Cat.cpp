/*
 * Cat.cpp
 *
 *  Created on: Jan 29, 2020
 *      Author: ray
 */

#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
	if(happy){
		cout << "I am happy :)" << endl;
	} else {
		cout << "I am sad :(" << endl;
	}
};

 void Cat::makeHappy(){
	 happy = true;
 }

 void Cat::makeSad(){
 	 happy = false;
  }
