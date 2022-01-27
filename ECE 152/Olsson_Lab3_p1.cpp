/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 3
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//defining variables
long double hoursWorked;
long double salary;
long double adjustedHoursWorked;

int main() {
	//asking for user input
	cout << "Please enter number of hours worked: ";		//asking question
	cin >> hoursWorked;										//getting user input
	cout << endl;											//going to new line for formatting

	//computing reply
	if (hoursWorked <= 40) {
		salary = hoursWorked * 80;
	}
	else {
		adjustedHoursWorked = hoursWorked - 40;
		salary = 3200 + (100 * adjustedHoursWorked);
	}
	cout << "In " << hoursWorked << " hours you earned a $" << salary << " salary." << endl;


	return 0;
}