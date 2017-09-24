/*
 * Purchase.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../includes/Purchase.h"

using namespace std;

int Purchase::getArgsCount() {
	return 4;
}

bool Purchase::validateArgs() {
	for (int i = 0; i < this->getArguments().size(); i++) {
		if (this->getArguments()[i].getValue() < 0) {
			return false;
		}
	}

	return true;
}

double* Purchase::calculateResult() {
	if (!validateArgs()) {
		cout << "Arguments must not be less than null" << endl;
		return nullptr;
	}

	result = (this->getArguments()[0].getValue()
			+ this->getArguments()[1].getValue())
			* (this->getArguments()[2].getValue()
					+ this->getArguments()[3].getValue());

	return &result;
}
