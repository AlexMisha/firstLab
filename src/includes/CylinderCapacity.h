/*
 * CylinderCapacity.h
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#ifndef SRC_INCLUDES_CYLINDERCAPACITY_H_
#define SRC_INCLUDES_CYLINDERCAPACITY_H_

#include "Operation.h"

class CylinderCapacity: public Operation {
	int getArgsCount();
	double calculateResult();
};

#endif /* SRC_INCLUDES_CYLINDERCAPACITY_H_ */
