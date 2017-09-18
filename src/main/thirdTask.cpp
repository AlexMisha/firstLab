/*
 * thirdTask.cpp
 *
 *  Created on: 18 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/tasks.h"
#include "../headers/common.h"

using namespace std;

int thirdTask() {
	double *pA = new double, *pH = new double, *pResult = new double;

	cout << "For @S = 1/2 * a * h@ type a and h" << endl;
	cin >> *pA >> *pH;

	if (!checkLessThanNull(pA, pH)) {
		cout << "Error: arguments must not be less than 0" << endl;
		delete pA, pH, pResult;
		return EXIT_FAILURE;
	}

	*pResult = 0.5 * *pA * *pH;

	cout << "S = " << *pResult << endl;

	delete pA, pH, pResult;
	return EXIT_SUCCESS;
}
