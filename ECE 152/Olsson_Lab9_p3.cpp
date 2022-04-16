/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

#include <iostream>

using namespace std;

// defining variables
struct Date {
	int month;
	int day;
	int year;
};

Date current;
int month;
int day;
int year;

// functions
int days(int userMonth, int userDay, int userYear) {
	current.month= userMonth;
	current.day = userDay;
	current.year = userYear;

	current.year = (current.year - 1900);

	current.month = (current.month + (current.year * 12));
	current.day = (current.day + (current.month * 30));

	return current.day;
}

int main() {
	Date userInput;

	cout << "Please enter numerical month to calculate" << endl;
	cin >> userInput.month;
	
	cout << "Please enter numerical day to calculate" << endl;
	cin >> userInput.day;

	cout << "Please enter numerical year to calculate" << endl;
	cin >> userInput.year;

	cout << "There have been " << days(userInput.month, userInput.day, userInput.year) <<
		" days since January 1, 1900." << endl;

	return 0;
}