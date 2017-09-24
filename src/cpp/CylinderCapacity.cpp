/*
 * CylinderCapacity.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../includes/CylinderCapacity.h"

using namespace std;

int CylinderCapacity::getArgsCount() {
	return 2;
}

bool CylinderCapacity::validateArgs() {
	for (int i = 0; i < this->getArguments().size(); i++) {
		if (this->getArguments()[i].getValue() < 0) {
			return false;
		}
	}

	return true;
}

double* CylinderCapacity::calculateResult() {
	if (!validateArgs()) {
		cout << "Arguments must not be less than null" << endl;
		return nullptr;
	}
	result = this->getArguments()[0].getValue()
			* this->getArguments()[1].getValue();

	return &result;
}
