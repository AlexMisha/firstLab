/*
 * commonUtil.cpp
 *
 *  Created on: 18 Sep 2017
 *      Author: micha
 */
#include <cstdarg>
#include <iostream>

using namespace std;

bool checkLessThanNull(const double* arg...) {
	while(*arg != '\0') {
		if (*arg < 0) {
			return false;
		}
		++arg;
	}

	return true;
}

bool checkNotNull(const double* arg...) {
	do {
		if (*arg == 0.0) {
			return false;
		}
		++arg;
	}while (*arg != '\0');

	return true;
}
