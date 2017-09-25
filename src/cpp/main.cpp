//============================================================================
// Name        : firstLab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
#include <vector>
#include <fstream>
#include <string>

#include "TriangleSquare.h"
#include "Visit.h"
#include "VerstToKm.h"
#include "PoundsToKg.h"
#include "CylinderCapacity.h"
#include "Purchase.h"
#include "Operation.h"

using namespace std;

void printHelp();

int main(int argc, char *argv[]) {
	const char *Options = "h?ctpvmk";
	string measure;

	double result;

	Operation *operation;

	int c = getopt(argc, argv, Options);

	if (c != -1) {
		if (c == '?' || c == 'h') {
			printHelp();
			return EXIT_SUCCESS;
		}
		if (c == 'c') {
			operation = new CylinderCapacity();
			measure = "meters^3";
		}
		if (c == 't') {
			operation = new TriangleSquare();
			measure = "meters^2";
		}
		if (c == 'p') {
			operation = new Purchase();
			measure = "rubles";
		}
		if (c == 'v') {
			operation = new Visit();
			measure = "rubles";
		}
		if (c == 'm') {
			operation = new VerstToKm();
			measure = "km";
		}
		if (c == 'k') {
			operation = new PoundsToKg();
			measure = "kg";
		}
	} else {
		cout << "No operation was selected" << endl
				<< "Use -h to see available operations" << endl;
		return EXIT_FAILURE;
	}

	for (int i = 0; i < operation->getArgsCount(); i++) {
		operation->nextArg();
	}

	int resultCode = EXIT_SUCCESS;

	try {
		result = operation->calculateResult();
		cout << "Result is " << result << " " << measure << endl;
	} catch (char const* error) {
		cout << error << endl;
		resultCode = EXIT_FAILURE;
	}

	delete operation;
	return resultCode;
}

void printHelp() {
	string help =
			"Usage: firstLab {-operation}\nOperations:\n\t-h -? Help function\n\t-c CylinderCapacity\n\t-t TriangleSquare\n\t-p Purchase\n\t-v Visit\n\t-m VerstToKm\n\t-k PoundsToKg";

	cout << help;
}
