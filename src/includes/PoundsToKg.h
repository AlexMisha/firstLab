/*
 * PoundsToKg.h
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#ifndef SRC_INCLUDES_POUNDSTOKG_H_
#define SRC_INCLUDES_POUNDSTOKG_H_

#include "Operation.h"

class PoundsToKg: public Operation {
public:
	bool validateArgs();
	double* calculateResult();
	int getArgsCount();
};

#endif /* SRC_INCLUDES_POUNDSTOKG_H_ */
