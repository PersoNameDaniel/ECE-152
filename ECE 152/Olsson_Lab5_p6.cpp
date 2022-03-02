/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 5
Date: 2-21-2022
*/

#include <iostream>

using namespace std;

//defining variables
int input;

//functions
int sumFibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1 or n == 2) {
		return 1;
	}

	int output;
	int numbers[999];
	for (int i = 2; i <= n; i++) {

		numbers[0] = 0;
		numbers[1] = 1;
		numbers[2] = 1;

		numbers[i] = (numbers[i - 2] + numbers[i - 1]);

		output = numbers[i];

	}
	return output;

}

//main function
int main() {
	cout << "Enter positive integer to calculate fibonacci sequence to." << endl;
	cin >> input;
	cout << endl;

	int n = input;

	cout << sumFibonacci(n) << endl;

	return 0;
}