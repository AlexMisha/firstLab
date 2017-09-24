/*
 * Purchase.h
 *
 *  Created on: 24 Sep 2017
 *      Author: micha
 */

#ifndef SRC_INCLUDES_PURCHASE_H_
#define SRC_INCLUDES_PURCHASE_H_

#include "Operation.h"

class Purchase: public Operation {
public:
	int getArgsCount();
	double calculateResult();
};

#endif /* SRC_INCLUDES_PURCHASE_H_ */
