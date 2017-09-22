/*
 * Operation.h
 *
 *  Created on: 20 Sep 2017
 *      Author: micha
 */

#ifndef SRC_MAIN_OPERATION_H_
#define SRC_MAIN_OPERATION_H_

#include <vector>
#include <string>

#include "Argument.h"

using namespace std;

class Operation {
private:
	vector<Argument> arguments;
	double result;
public:
	Operation();
	virtual ~Operation();

	vector<Argument> getArguments();

	void nextArg();
	virtual int getArgsCount() = 0;

	virtual bool validateArgs() = 0;
	virtual double calculateResult() = 0;
};

#endif /* SRC_MAIN_OPERATION_H_ */
