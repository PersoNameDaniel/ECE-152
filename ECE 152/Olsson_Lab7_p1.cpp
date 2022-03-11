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

	return 0;
}