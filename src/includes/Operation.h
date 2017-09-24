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

class Operation {
protected:
	std::vector<double> arguments;
public:
	Operation();
	virtual ~Operation();

	void nextArg();
	virtual int getArgsCount() = 0;

	virtual bool validateArgs();
	virtual double calculateResult() = 0;
};

#endif /* SRC_MAIN_OPERATION_H_ */
