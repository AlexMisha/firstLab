/*
 * Visit.h
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#ifndef SRC_INCLUDES_VISIT_H_
#define SRC_INCLUDES_VISIT_H_

#include "Operation.h"

class Visit: public Operation {
public:
	bool validateArgs();
	int getArgsCount();
	double* calculateResult();
};

#endif /* SRC_INCLUDES_VISIT_H_ */
