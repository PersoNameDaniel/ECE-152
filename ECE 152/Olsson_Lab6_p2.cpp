/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 6
Date: 2-28-2022
*/

#include <iostream>

using namespace std;

//defining variables
int value;
int userArray[10];

//functions

int main() {

	//getting array from user
	for (int i = 0; i <= 9; i++) {
		cout << "Please enter integer number " << i + 1 << " of 10." << endl;
		cin >> userArray[i];
	}
	cout << endl;

	//printing original array
	for (int i = 0; i <= 9; i++) {
		cout << userArray[i] << ", ";
	}
	cout << endl;

	//reversing order of array
	for (int i = 0; i <= 4; i++) {
		value = userArray[i];
		userArray[i] = userArray[9 - i];
		userArray[9 - i] = value;
	}

	//printing new array
	for (int i = 0; i <= 9; i++) {
		cout << userArray[i] << ", ";
	}
	cout << endl;

	return 0;
}