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
int arr2[10];

//functions
void display_common(int arr1[], int arr2[]) {
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (arr1[i] == arr2[j]) {
				cout << arr1[i] << ", ";
			}
		}
	}
}

int main() {

	//seeding rand
	srand(time(0));

	//generate random numbers
	for (int i = 0; i <= 9; i++) {
		arr1[i] = rand() % 30 + 19;
	}
	for (int i = 0; i <= 9; i++) {
		arr2[i] = rand() % 30 + 19;
	}

	//outputting arrays
	for (int i = 0; i <= 9; i++) {
		cout << arr1[i] << ", ";
	}
	cout << endl;
	for (int i = 0; i <= 9; i++) {
		cout << arr2[i] << ", ";
	}
	cout << endl;

	display_common(arr1, arr2);

	return 0;
}