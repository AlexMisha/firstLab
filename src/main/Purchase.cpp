/*
 * Purchase.cpp
 *
 *  Created on: 22 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "Operation.h"

using namespace std;

class Purchase: public Operation {
public:
	bool validateArgs() {
		for (int i = 0; i < this->getArguments().size(); i++) {
			if (this->getArguments()[i].getValue() < 0) {
				return false;
			}
		}

		return true;
	}

	double calculateResult() {
		if (!validateArgs()) {
			cout << "Arguments must not be less than null" << endl;
			return NULL;
		}

		return (this->getArguments()[0].getValue()
				+ this->getArguments()[1].getValue())
				* (this->getArguments()[2].getValue()
						+ this->getArguments()[3].getValue());
	}

	int getArgsCount() {
		return 4;
	}
};
