/*
 * TriangleSquare.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../includes/TriangleSquare.h"

using namespace std;

bool TriangleSquare::validateArgs() {
	for (int i = 0; i < this->getArguments().size(); i++) {
		if (this->getArguments()[i].getValue() < 0) {
			return false;
		}
	}

	return true;
}

double* TriangleSquare::calculateResult() {
	if (!validateArgs()) {
		cout << "Arguments must not be less than null" << endl;
		return nullptr;
	}

	result = 0.5 * this->getArguments()[0].getValue()
			* this->getArguments()[1].getValue();

	return &result;
}

int TriangleSquare::getArgsCount() {
	return 2;
}
