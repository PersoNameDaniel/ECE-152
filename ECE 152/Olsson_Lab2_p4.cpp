/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//stating variables
int userInput;		//user input
int output;			//answer

int main() {
	cout << "Enter the temperature in degree Fahrenheit: ";		//asking for input
	cin >> userInput;											//receiving input
	cout << endl;												//formatting

	output = (5.0 / 9.0) * (userInput - 32);		//generating output

	cout << "Temperature in degree Celsius: " << output << endl;		//outputting answer

	return 0;
}