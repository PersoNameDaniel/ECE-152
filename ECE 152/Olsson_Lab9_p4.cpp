/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

// #includes
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

// defining variables

// functions
string fileInput[5][5];

int main() {
	ifstream inFile;
	inFile.open("employee.dat");
	if (inFile.fail()) {
		cout << "File failed to open" << endl;
		exit(1);
	}

	ofstream outFile;
	outFile.open("employee.bak");
	if (outFile.fail()) {
		cout << "File failed to open" << endl;
		exit(1);
	}

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++) {
			inFile >> fileInput[i][j];
		}
	}

	// file output
	for (int i = 0; i <= 4; i++) {
		outFile << endl;
		for (int j = 0; j <= 4; j++) {
			outFile << fileInput[i][j] << "    ";
		}
	}

	outFile.close();
	cout << "The file " << "employee.bak" << " has been successfully written." << endl;

	outFile << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);

	return 0;
}