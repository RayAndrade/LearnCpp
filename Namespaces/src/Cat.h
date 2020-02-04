/*
 * Cat.h
 *
 *  Created on: Feb 4, 2020
 *      Author: ray
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats{

const string CATNAME = "Felix";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};
}
#endif /* CAT_H_ */
