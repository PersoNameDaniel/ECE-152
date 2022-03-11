/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 7
Date: 3-07-2022
*/

#include <iostream>

using namespace std;

//defining variables
int userIntArray[2][4];
int arrayRow1Total = 0;
int arrayRow1Average = 0;
int arrayRow2Total = 0;
int arrayRow2Average = 0;

//functions

int main() {
	
	//getting user input array
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 3; j++) {
			cout << "Please enter integer position " << (i + 1) << ", " << (j + 1) << endl;
			cin >> userIntArray[i][j];
			cout << endl;
		}
	}

	//computing averages of rows
	for (int i = 0; i <= 3; i++) {
		arrayRow1Total = userIntArray[0][i] + arrayRow1Total;
	}
	arrayRow1Average = (arrayRow1Total / 4);

	for (int i = 0; i <= 3; i++) {
		arrayRow2Total = userIntArray[1][i] + arrayRow2Total;
	}
	arrayRow2Average = (arrayRow2Total / 4);

	return 0;
}