/*
 * Argument.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: micha
 */

#include "../includes/Argument.h"

Argument::Argument(double value) {
	setValue(value);
}

double Argument::getValue() {
	return value;
}

void Argument::setValue(double value) {
	this->value = value;
}

Argument::~Argument() {
	// TODO Auto-generated destructor stub
}
