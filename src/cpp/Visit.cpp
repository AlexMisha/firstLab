/*
 * Visit.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../includes/Visit.h"

using namespace std;

bool Visit::validateArgs() {
	for (int i = 0; i < this->getArguments().size(); i++) {
		if (this->getArguments()[i].getValue() < 0) {
			return false;
		}
	}

	if (this->getArguments()[1].getValue() == 0.0) {
		return false;
	}

	return true;
}

double* Visit::calculateResult() {
	if (!validateArgs()) {
		cout
				<< "Arguments must not be less than null and second argument must not be equal to zero"
				<< endl;
		return nullptr;
	}

	result = (this->getArguments()[0].getValue()
			* (this->getArguments()[1].getValue() / 100.0))
			* this->getArguments()[2].getValue();

	return &result;
}

int Visit::getArgsCount() {
	return 3;
}
