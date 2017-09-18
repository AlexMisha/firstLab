/*
 * fifthTask.cpp
 *
 *  Created on: 18 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/tasks.h"
#include "../headers/common.h"

using namespace std;

int fifthTask() {
	double *pVerst = new double, *pKm = new double;

	cout << "Type verst" << endl;
	cin >> *pVerst;

	*pKm = (*pVerst * 1066.8) / 1000;

	cout << *pVerst << " verst = " << *pKm << "km" << endl;

	delete pVerst, pKm;
	return EXIT_SUCCESS;
}
