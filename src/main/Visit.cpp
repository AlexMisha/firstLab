/*
 * Visit.cpp
 *
 *  Created on: 22 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/Operation.h"

using namespace std;

class Visit: public Operation {
public:
	bool validateArgs() {
		for (int i = 0; i < this->getArguments().size(); i++) {
			if (this->getArguments()[i].getValue() < 0) {
				return false;
			}
		}

		if (this->getArguments()[1].getValue() == 0.0) {
			return false;
		}

		return true;
	}

	double* calculateResult() {
		if (!validateArgs()) {
			cout
					<< "Arguments must not be less than null and second argument must not be equal to zero"
					<< endl;
			return nullptr;
		}

		result = (this->getArguments()[0].getValue()
				* (this->getArguments()[1].getValue() / 100.0))
				* this->getArguments()[2].getValue();

		return &result;
	}

	int getArgsCount() {
		return 3;
	}
};

