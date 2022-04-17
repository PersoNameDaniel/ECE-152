/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

#include <iostream>
#include <fstream>

using namespace std;

// defining variables

// functions

int main() {
	ifstream inFile;
	inFile.open("employees.dat");

	ofstream outFile;
	outFile.open("employee.bak");

	return 0;
}