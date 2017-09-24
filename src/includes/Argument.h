/*
 * Argument.h
 *
 *  Created on: 20 Sep 2017
 *      Author: micha
 */

#ifndef SRC_MAIN_ARGUMENT_H_
#define SRC_MAIN_ARGUMENT_H_

#include <string>

class Argument {
private:
	double value;
public:
	Argument(double value);
	virtual ~Argument();

	double getValue();
	void setValue(double value);
};

#endif /* SRC_MAIN_ARGUMENT_H_ */
