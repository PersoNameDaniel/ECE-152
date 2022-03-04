/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 6
Date: 2-28-2022
*/

#include <iostream>

using namespace std;

//defining variables
float temp;
int n = 9;
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
	cout << endl << endl;

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			if (prices1D[i] > prices1D[j]) {
				temp = prices1D[i];
				prices1D[i] = prices1D[j];
				prices1D[j] = temp;
			}
		}
	}
	
	for (int i = 0; i <= 8; i++) {
		cout << prices1D[i] << ", ";
	}
	cout << endl;

	return 0;
}