/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 3
Date: 1-27-2022
*/

#include <iostream>

using namespace std;

//defining variables
int userDollarAmount;
int originalDollarAmount;
int divisor;
int hundreds = 0;
int fiftys = 0;
int twenties = 0;
int tens = 0;
int fives = 0;
int ones = 0;
int cents;


int main() {
	//getting user input
	cout << "Please enter numerical dollar amount to sort: ";		//asking user for numerical dollar amount
	cin >> userDollarAmount;											//getting user input
	originalDollarAmount = userDollarAmount;							//saving original amount to another variable
	cout << endl;														//skipping line for formatting

	//testing for valid number
	if (userDollarAmount % 5 != 0) {														//if statement checking if number is valid
		cout << "The amount " << userDollarAmount << " cannot be withdrawn." << endl;		//stating to user the amount cannot be dispensed
		//cout << 5 % userDollarAmount << endl;												//DEBUGSSSS
		exit(0);																			//exiting program due to incorrect number
	}

	//converting amount to fewest number of bills
	while (userDollarAmount > 1) {							//while statement for while the 
		//cout << "loop started" << endl;					//debug output
		if (userDollarAmount >= 100) {						//if statement for adding hundreds
			hundreds++;										//adding one to the number of hundreds
			userDollarAmount = userDollarAmount - 100;		//removing 100 from the variable
			//cout << "Hundreds debug" << endl;				//more debug
			continue;										//continuing to beginning of loop
		}													//processes are the same for all denominations
		/*
		else if (userDollarAmount >= 50) {
			fiftys++;
			userDollarAmount = userDollarAmount - 50;
			continue;
		}
		*/
		else if (userDollarAmount >= 20) {
			twenties++;
			userDollarAmount = userDollarAmount - 20;
			continue;
		}
		else if (userDollarAmount >= 10) {
			tens++;
			userDollarAmount = userDollarAmount - 10;
			continue;
		}
		else if (userDollarAmount >= 5) {
			fives++;
			userDollarAmount = userDollarAmount - 5;
			continue;
		}
		/*
		else if (userDollarAmount >= 1) {			//still not working
			ones++;
			userDollarAmount = userDollarAmount - 1;
			cout << userDollarAmount << endl;		//even more debug
			continue;
		}
		*/
		//cout << "Debug end loop";			//i need more debug
		else {								//else statement for error state
			cout << "Error" << endl;		//outputting error to user
			exit(0);						//stopping program for error
		}
	}

		//finishing
		//cents = userDollarAmount;		//setting cents to leftover cents from user input

		//outputting answer
		cout << "Please collect your bills as follows: " << endl;		//initital output statement
		if (hundreds > 0) {												//if there are any hundreds print number to screen
			cout << "$100: " << hundreds << endl;						//printing number of hundreds
		}																//processes are the same for all if statements
		if (fiftys > 0) {
			cout << "$50: " << fiftys << endl;
		}
		if (twenties > 0) {
			cout << "$20: " << twenties << endl;
		}
		if (tens > 0) {
			cout << "$10: " << tens << endl;
		}
		if (fives > 0) {
			cout << "$5: " << fives << endl;
		}
		if (ones > 0) {
			cout << "$1: " << ones << endl;
		}
		if (cents > 0) {
			cout << cents << " cents" << endl;
		}

	return 0;
}