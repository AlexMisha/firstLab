/*
 * Operation.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../includes/Operation.h"

using namespace std;

Operation::Operation() {

}

Operation::~Operation() {
}

void Operation::nextArg() {
	double arg;

	cout << "Type next parameter" << endl;
	cin >> arg;

	Argument member(arg);
	this->arguments.insert(this->arguments.end(), member);
}

vector<Argument> Operation::getArguments() {
	return this->arguments;
}
