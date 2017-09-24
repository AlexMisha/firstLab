/*
 * PoundsTpKg.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include "PoundsToKg.h"

bool PoundsToKg::validateArgs() {
	return true;
}

double PoundsToKg::calculateResult() {
	return this->arguments[0] * 0.4059;
}

int PoundsToKg::getArgsCount() {
	return 1;
}
