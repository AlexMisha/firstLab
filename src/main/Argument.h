/*
 * Argument.h
 *
 *  Created on: 20 Sep 2017
 *      Author: micha
 */

#ifndef SRC_MAIN_ARGUMENT_H_
#define SRC_MAIN_ARGUMENT_H_

#include <string>

using namespace std;

class Argument {
private:
	double value;
public:
	Argument(double value);
	virtual ~Argument();

	double getValue();

	bool valid(int validationCode);
};


#endif /* SRC_MAIN_ARGUMENT_H_ */
