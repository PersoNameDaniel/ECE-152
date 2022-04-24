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

// namespaces
using namespace std;

// defining variables
int totalMiles;
int totalGallons;
double totalMPG;

// functions
int fileInput[5][4];

int main() {
	ifstream inFile;
	inFile.open("carSpecifications.dat");
	if (inFile.fail()) {
		cout << "File failed to open" << endl;
		exit(1);
	}

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 2; j++) {
			inFile >> fileInput[i][j];
		}
	}

	for (int i = 0; i <= 4; i++) {
		fileInput[i][3] = (fileInput[i][1] / fileInput[i][2]);
	}

	totalMiles = 0;
	for (int i = 0; i <= 4; i++) {
		totalMiles = (fileInput[i][1] + totalMiles);
	}

	totalGallons = 0;
	for (int i = 0; i <= 4; i++) {
		totalGallons = (fileInput[i][2] + totalGallons);
	}

	cout << "ID   Miles  Gallons  MPG" << endl;
	for (int i = 0; i <= 4; i++) {
		cout << endl;
		for (int j = 0; j <= 3; j++) {
			cout << fileInput[i][j] << "    ";
		}
	}

	cout << endl;
	cout << "Total Miles Driven: " << totalMiles << endl;
	cout << "Total Gallons Used: " << totalGallons << endl;
	cout << "Total MPG: " << (totalMiles / totalGallons) << endl;

	return 0;
}