/*
 * sixthTask.cpp
 *
 *  Created on: 18 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/tasks.h"
#include "../headers/common.h"

using namespace std;

int sixthTask() {
	double *pPounds = new double, *pKg = new double;

	cout << "Type pounds" << endl;
	cin >> *pPounds;

	*pKg = (*pPounds * 405.9) / 1000;

	cout << *pPounds << " pounds = " << *pKg << "kg" << endl;

	delete pPounds, pKg;
	return EXIT_SUCCESS;
}
