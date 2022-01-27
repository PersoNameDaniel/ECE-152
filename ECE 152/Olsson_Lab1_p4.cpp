/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 1
Date: 01-12-2022
*/

#include <iostream>

using namespace std;

int main() {

	//declaring variables
	float num1 = 16.5;
	float num2 = 18.2;
	float num3 = 10.3;

	float total = (num1 + num2 + num3);
	float average = (total / 3);

	//displaying output message
	cout << "Total is " << total << " and Average is " << average << "." << endl;

	return 0;
}