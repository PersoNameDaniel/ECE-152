/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 4
Date: 2-9-2022
*/

#include <iostream>

using namespace std;

//defining variables
float startingAmount;		//starting amount of money in account
float calculatedAmount;		//the current calculated amount in account
int years;					//number of years in the account
float interestRate;			//current interest rate


int main() {

	//default values
	startingAmount = 8000;
	interestRate = 0.025;

	/*
	for loop for number of years to calculate compound interest
	*/

	calculatedAmount = startingAmount;
	for (years = 0; years <= 10; years++) {
		calculatedAmount = calculatedAmount + ((interestRate * calculatedAmount) * years);
		cout << "After " << years << " years, there is $" << calculatedAmount << " in the account." << endl;
	}

	return 0;
}