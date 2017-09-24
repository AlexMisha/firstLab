/*
 * Purchase.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "Purchase.h"

using namespace std;

int Purchase::getArgsCount() {
	return 4;
}

double Purchase::calculateResult() {
	if (!validateArgs()) {
		throw "Arguments must not be less than null";
	}

	return (this->arguments[0] + this->arguments[1])
			* (this->arguments[2] + this->arguments[3]);
}
