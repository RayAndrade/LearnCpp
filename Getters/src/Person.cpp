/*
 * Person.cpp
 *
 *  Created on: Jan 29, 2020
 *      Author: ray
 */

#include "Person.h"

Person::Person() {

	name = "Ray";
}

string Person::toString(){

	return "My name is " + name;
}

void Person::setName(string newName){
	name = newName;
}

string Person::getName(){
	return name;
}
