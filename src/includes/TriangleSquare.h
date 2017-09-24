/*
 * TriangleSquare.h
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#ifndef SRC_INCLUDES_TRIANGLESQUARE_H_
#define SRC_INCLUDES_TRIANGLESQUARE_H_

#include "Operation.h"

class TriangleSquare: public Operation {
public:
	bool validateArgs();
	double* calculateResult();
	int getArgsCount();
};

#endif /* SRC_INCLUDES_TRIANGLESQUARE_H_ */
