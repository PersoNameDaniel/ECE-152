/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//stating variables
int userInput;
int output;

int main() {
	cout << "Enter the temperature in degree Fahrenheit: ";
	cin >> userInput;
	cout << endl;

	output = (5.0 / 9.0) * (userInput - 32);

	cout << "Temperature in degree Celsius: " << output << endl;

	return 0;
}