/*
 * Operation.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "Operation.h"

using namespace std;

Operation::Operation() {

}

Operation::~Operation() {
}

void Operation::nextArg() {
	double arg;

	cout << "Type next parameter" << endl;
	cin >> arg;

	this->arguments.insert(this->arguments.end(), arg);
}

bool Operation::validateArgs() {
	for (int i = 0; i < this->arguments.size(); i++) {
		if (this->arguments[i] < 0) {
			return false;
		}
	}

	return true;
}
