//============================================================================
// Name        : Variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++Tutorial for Beginners 5 - Variables
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int numberCats = 5;
		int numberDogs = 2;
		int numberPets = numberCats + numberDogs;

		cout << "Number of Cats: " << numberCats << endl;
		cout << "Number of Dogs: " << numberDogs << endl;
		cout << "Number of Pets: " << numberDogs + numberCats << endl;
		cout << "Number of Pets: " << numberPets << endl;
		cout << "Add one more dog" << endl;

		numberDogs++;

		cout << "Real number of Pets: " << numberDogs + numberCats << endl;
		cout << "the past not updated number of Pets: " << numberPets << endl;

	return 0;
}
