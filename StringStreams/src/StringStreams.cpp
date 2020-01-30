//============================================================================
// Name        : StringStreams.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 33 - String Streams; Adding Number to Strings
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

int main() {

	int age = 32;
	string name = "Bob";
	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << " Age is: ";
	ss << age;

	//string info = "Name:" + " age:" + age;
	string info = ss.str();


	cout << ss.str() << endl;
	cout << info << endl;

	return 0;
}
