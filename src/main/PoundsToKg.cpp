/*
 * PoundsToKg.cpp
 *
 *  Created on: 22 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/Operation.h"

using namespace std;

class PoundsToKg: public Operation {
public:
	bool validateArgs() {
		return true;
	}

	double* calculateResult() {
		result = this->getArguments()[0].getValue() * 0.4059;
		return &result;
	}

	int getArgsCount() {
		return 1;
	}
};
