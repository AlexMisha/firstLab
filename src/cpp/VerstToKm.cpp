/*
 * VerstToKm.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include "VerstToKm.h"

bool VerstToKm::validateArgs() {
	return true;
}

double VerstToKm::calculateResult() {
	return this->arguments[0] * 1.0668;
}

int VerstToKm::getArgsCount() {
	return 1;
}
