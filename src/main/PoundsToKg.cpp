/*
 * PoundsToKg.cpp
 *
 *  Created on: 22 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "Operation.h"

using namespace std;

class PoundsToKg: public Operation {
public:
	bool validateArgs() {
		return true;
	}

	double calculateResult() {
		return this->getArguments()[0].getValue() * 0.4059;
	}

	int getArgsCount() {
		return 1;
	}
};
