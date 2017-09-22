/*
 * Argument.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: micha
 */

#include "Argument.h"

static constexpr int NOT_NULL = 3;
static constexpr int NOT_LESS_THAN_NULL = 4;

Argument::Argument(double value) {
	this->value = value;
}

double Argument::getValue() {
	return value;
}

bool Argument::valid(int validationCode) {
	switch (validationCode) {
	case NOT_NULL:
		if (value == 0.0) {
			return false;
		}
		break;

	case NOT_LESS_THAN_NULL:
		if (value < 0) {
			return false;
		}
		break;
	}
	return true;

}

Argument::~Argument() {
	// TODO Auto-generated destructor stub
}

