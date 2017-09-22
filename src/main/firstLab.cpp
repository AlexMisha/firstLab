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

#include "CylinderCapacity.cpp"
#include "TriangleSquare.cpp"
#include "Visit.cpp"
#include "Purchase.cpp"
#include "VerstToKm.cpp"
#include "PoundsToKg.cpp"
#include "Operation.h"

using namespace std;

void printHelp();

int main(int argc, char *argv[]) {
	const char *Options = "h?ctpvmk";

	double result;

	Operation *operation;
	CylinderCapacity cylinderCapacity;
	TriangleSquare triangleSquare;
	Purchase purchase;
	Visit visit;
	VerstToKm verst;
	PoundsToKg pounds;

	int c = getopt(argc, argv, Options);
	if (c != -1) {
		switch (c) {
		case '?':
		case 'h':
			printHelp();
			return EXIT_SUCCESS;
			break;
		case 'c':
			operation = &cylinderCapacity;
			break;
		case 't':
			operation = &triangleSquare;
			break;
		case 'p':
			operation = &purchase;
			break;
		case 'v':
			operation = &visit;
			break;
		case 'm':
			operation = &verst;
			break;
		case 'k':
			operation = &pounds;
			break;
		default:
			cout << "No operation was selected" << endl
					<< "Use -h to see available operations" << endl;
		}
	} else {
		cout << "No operation was selected" << endl
				<< "Use -h to see available operations" << endl;
		return EXIT_FAILURE;
	}

	for (int i = 0; i < operation->getArgsCount(); i++) {
		operation->nextArg();
	}

	result = operation->calculateResult();
	if (result == NULL) {
		return EXIT_FAILURE;
	}

	cout << "Result is " << result << endl;

	return EXIT_SUCCESS;
}

void printHelp() {
	string help;
	ifstream helpFile("help", ios_base::in);

	if (helpFile.is_open()) {
		cout << helpFile.rdbuf();
		helpFile.close();
	} else {
		cout << "Unable to open help file" << endl;
	}
}
