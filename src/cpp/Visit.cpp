/*
 * Visit.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "Visit.h"

using namespace std;

bool Visit::validateArgs() {
	for (int i = 0; i < this->arguments.size(); i++) {
		if (this->arguments[i] < 0) {
			return false;
		}
	}

	if (this->arguments[1] == 0.0) {
		return false;
	}

	return true;
}

double Visit::calculateResult() {
	if (!validateArgs()) {
		throw "Arguments must not be less than null and second argument must not be equal to zero";
	}

	return (this->arguments[0] * (this->arguments[1] / 100.0))
			* this->arguments[2];
}

int Visit::getArgsCount() {
	return 3;
}
