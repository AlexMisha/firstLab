/*
 * TriangleSquare.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "TriangleSquare.h"

using namespace std;

double TriangleSquare::calculateResult() {
	if (!validateArgs()) {
		throw "Arguments must not be less than null";
	}

	return 0.5 * this->arguments[0] * this->arguments[1];
}

int TriangleSquare::getArgsCount() {
	return 2;
}
