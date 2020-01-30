/*
 * Person.cpp
 *
 *  Created on: Jan 29, 2020
 *      Author: ray
 */

#include "Person.h"
#include <sstream>

//Person::Person() {
	// age = 0;
	// name = "";
//}

//Person::Person(string name, int age):name(name),age(age) {

//}

string Person::toString(){
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << " age: ";
	ss << age;
	ss << " ";

	return ss.str();
}

