/*
 * firstTask.cpp
 *
 *  Created on: 16 Sep 2017
 *      Author: micha
 */

#include <iostream>
#include <cmath>

#include "../headers/tasks.h"
#include "../headers/common.h"

#define ERROR_CODE -1;

using namespace std;

double firstCommandHandler();

double secondCommandHandler();

int firstTask() {
	double *result = new double;
	int *command = new int;

	cout << "What formula do you want use?" << endl << "V = Sh (1)" << endl
			<< "V = pi * r^2 * h (2)" << endl;
	cout << "Please choose one of them" << endl;
	cin >> *command;

	switch (*command) {
	case 1:
		*result = firstCommandHandler();
		break;
	case 2:
		*result = secondCommandHandler();
		break;
	default:
		cout << "Error: unexpected command value [" << *command << "]" << endl;
		delete result, command;
		return EXIT_FAILURE;
	}

	if (*result == -1) {
		cout << "Error: arguments must not be less than 0" << endl;
		delete result, command;
		return EXIT_FAILURE;
	}

	cout << "V = " << *result << endl;

	delete result, command;
	return EXIT_SUCCESS;
}

double firstCommandHandler() {
	double *pS = new double, *pH = new double;

	cout << "Please type S and h" << endl;
	cin >> *pS >> *pH;

	if (!checkLessThanNull(pS, pH)) {
		delete pS, pH;
		return ERROR_CODE;
	}

	double result = *pS * *pH;

	delete pS, pH;
	return result;
}

double secondCommandHandler() {
	const double pi = 3.1415926;
	double *pR = new double, *pH = new double;

	cout << "Please type r and h" << endl;
	cin >> *pR >> *pH;

	if (!checkLessThanNull(pR, pH)) {
		delete pR, pH;
		return ERROR_CODE;
	}

	double result = pi * pow(*pR, 2.0) * *pH;

	delete pR, pH;
	return result;
}
