/*
 * Animals.h
 *
 *  Created on: Feb 4, 2020
 *      Author: ray
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>

using namespace std;

namespace rla {

const string CATNAME = "Tom";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace rla */

#endif /* ANIMALS_H_ */
