//============================================================================
// Name        : StaticVariables.cpp
// Author      : Ray Andrade
// Version     :
// Copyright   : 
// Description : C++Tutorial for Beginners 55 - Static Variables
//============================================================================

#include <iostream>
using namespace std;

class Test {
public:
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test(){
		id = ++count;
	}
	int getId(){
		return id;
	}

	static void showInfo(){
		cout << "showInfo is: "<< count << endl;
	}
};

int Test::count = 0;

int main() {

	cout << "MAX value is: "<< Test::MAX << endl;

	Test test1;
	cout << test1.getId()<< endl;

	Test test2;
	cout << test2.getId()<< endl;
	Test::showInfo();

	return 0;
}
