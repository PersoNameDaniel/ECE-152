/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 4
Date: 2-9-2022
*/

#include <iostream>

using namespace std;

//defining variables
float startingAmount;
float calculatedAmount;
int years;
float interestRate;


int main() {

	//default values
	startingAmount = 8000;
	years = 10;
	interestRate = 0.025;

	/*
	
	*/

	calculatedAmount = startingAmount;
	for (years = 0; years <= 10; years++) {
		calculatedAmount + ((interestRate * calculatedAmount) * years);
		cout << "After " << years << " years, there is $" << calculatedAmount << " in the account."
	}

	return 0;
}