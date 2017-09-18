//============================================================================
// Name        : firstLab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "../headers/tasks.h"

using namespace std;

int main() {
	int command, resultCode = 0;
	string input = "Please choose program of lab (1-6)";

	cout << input << endl;
	cin >> command;

	switch (command) {
	case 1:
		resultCode = firstTask();
		break;
	case 2:
		resultCode = secondTask();
		break;
	case 3:
		resultCode = thirdTask();
		break;
	case 4:
		resultCode = fourthTask();
		break;
	case 5:
		resultCode = fifthTask();
		break;
	case 6:
		resultCode = sixthTask();
		break;
	default:
		cout << "Error: unexpected command value [" << command << "]" << endl;
		return EXIT_FAILURE;
	}

	if (resultCode) {
		cout << "Error while executing process" << endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
