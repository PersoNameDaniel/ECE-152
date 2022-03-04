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
int arr1[10];

//functions

int main() {

	//getting array from user
	for (int i = 0; i <= 9; i++) {
		cout << "Please enter integer number " << i + 1 << " of 10." << endl;
		cin >> arr1[i];
	}
	cout << endl;

	//printing original array
	for (int i = 0; i <= 9; i++) {
		cout << arr1[i] << ", ";
	}
	cout << endl;

	//reversing order of array
	for (int i = 0; i <= 4; i++) {
		value = arr1[i];
		arr1[i] = arr1[9 - i];
		arr1[9 - i] = value;
	}

	//printing new array
	for (int i = 0; i <= 9; i++) {
		cout << arr1[i] << ", ";
	}
	cout << endl;

	return 0;
}