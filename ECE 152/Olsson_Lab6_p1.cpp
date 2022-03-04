/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 6
Date: 2-28-2022
*/

#include <iostream>

using namespace std;

//defining variables
float prices1D[9] = { 10.99, 4.49, 1.25, 6.75, 8.50, 16.99, 3.45, 2.05, 17.49 };
float prices2D[3][3];

//functions

int main() {
	for (int i = 0; i <= 8; i++) {
		prices2D[i / 3][i] = prices1D[i];
	}

	for (int i = 0; i <= 8; i++) {
		if ((i % 3 == 0) and (i != 0)) {
			cout << endl;
		}
		cout << prices2D[i / 3][i] << ", ";
	}

	return 0;
}