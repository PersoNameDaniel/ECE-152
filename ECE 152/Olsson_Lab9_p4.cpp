/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

// defining variables

// functions

int main() {
	ifstream inFile;
	inFile.open("employees.dat");
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

	outFile << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);

	return 0;
}