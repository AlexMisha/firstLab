/*
 * VerstToKm.cpp
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#include "../includes/VerstToKm.h"

bool VerstToKm::validateArgs() {
	return true;
}

double* VerstToKm::calculateResult() {
	result = this->getArguments()[0].getValue() * 1.0668;
	return &result;
}

int VerstToKm::getArgsCount() {
	return 1;
}
