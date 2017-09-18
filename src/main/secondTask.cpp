/*
 * secondTask.cpp
 *
 *  Created on: 16 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/tasks.h"
#include "../headers/common.h"

using namespace std;

int secondTask() {
	double *pFirstCost = new double, *pSecondCost = new double, *pResult =
			new double;
	double *pFirstCount = new double, *pSecondCount = new double;

	cout
			<< "Type: cost of one notebook, cost of one pencil, notebook's count, pencil's count"
			<< endl;
	cin >> *pFirstCost >> *pSecondCost >> *pFirstCount >> *pSecondCount;

	if (!checkLessThanNull(pFirstCost, pSecondCost, pFirstCount,
			pSecondCount)) {
		cout << "Error: arguments must not be less than 0" << endl;
		delete pFirstCost, pSecondCost, pFirstCount, pSecondCount, pResult;
		return EXIT_FAILURE;
	}

	*pResult = *pFirstCost * *pSecondCost + *pFirstCount * *pSecondCount;

	cout << "Result is " << *pResult << endl;

	delete pFirstCost, pSecondCost, pFirstCount, pSecondCount, pResult;
	return EXIT_SUCCESS;
}
