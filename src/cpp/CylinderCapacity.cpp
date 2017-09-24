/*
 * CylinderCapacity.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "CylinderCapacity.h"

using namespace std;

int CylinderCapacity::getArgsCount() {
	return 2;
}

double CylinderCapacity::calculateResult() {
	if (!validateArgs()) {
		throw "Arguments must not be less than null";
	}

	return this->arguments[0] * this->arguments[1];
}
