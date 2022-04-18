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

	// send data to the file
	outFile << "Mats " << 39.95 << endl
		<< "Bulbs " << 3.022 << endl
		<< "Fuses " << 1.08 << endl;

	outFile.close();
	cout << "The file " << "employee.bak" << " has been successfully written." << endl;

	outFile << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);

	return 0;
}