/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 6
Date: 2-28-2022
*/

#include <iostream>

using namespace std;

//defining variables
int arr1[10];
int answer[3];

//functions

void summary(int array[10]) {
	int min = 999;
	int max = -999;
	int total = 0;
	int average;

	for (int i = 0; i <= 9; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	answer[0] = min;

	for (int i = 0; i <= 9; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	answer[1] = max;

	for (int i = 0; i <= 9; i++) {
		total = (total + array[i]);
	}
	average = (total / 10);

	answer[2] = average;
}

int main() {

	//getting array from user
	for (int i = 0; i <= 9; i++) {
		cout << "Please enter integer number " << i + 1 << " of 10." << endl;
		cin >> arr1[i];
	}
	cout << endl;

	summary(arr1);

	cout << "Minimum is " << answer[0] << ". Maximum is " << answer[1] << ". Average is " << answer[2] << "." << endl;

	return 0;
}