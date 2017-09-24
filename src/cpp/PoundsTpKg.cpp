/*
 * PoundsTpKg.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include "../includes/PoundsToKg.h"

bool PoundsToKg::validateArgs() {
	return true;
}

double* PoundsToKg::calculateResult() {
	result = this->getArguments()[0].getValue() * 0.4059;
	return &result;
}

int PoundsToKg::getArgsCount() {
	return 1;
}
