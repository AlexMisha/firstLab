/*
 * fourthTask.cpp
 *
 *  Created on: 18 Sep 2017
 *      Author: micha
 */

#include <iostream>

#include "../headers/tasks.h"
#include "../headers/common.h"

using namespace std;

int fourthTask() {
	double *pDistance = new double, *pConsumption = new double, *pPetrolPrice =
			new double, *pResult = new double;

	cout << "Type distance(km), consumption(l/100km), petrol price($)" << endl;
	cin >> *pDistance >> *pConsumption >> *pPetrolPrice;

	if (!checkLessThanNull(pDistance, pConsumption, pPetrolPrice)) {
		cout << "Error: arguments must not be less than 0" << endl;
		delete pDistance, pConsumption, pPetrolPrice, pResult;
		return EXIT_FAILURE;
	}

	if (!checkNotNull(pConsumption)) {
		cout << "Error: consumption must not be 0" << endl;
		delete pDistance, pConsumption, pPetrolPrice, pResult;
		return EXIT_FAILURE;
	}

	*pResult = ((*pDistance * 2) / *pConsumption) * *pPetrolPrice;
	cout << "Cost of your ride is " << *pResult << "$" << endl;

	delete pDistance, pConsumption, pPetrolPrice, pResult;
	return EXIT_SUCCESS;
}

