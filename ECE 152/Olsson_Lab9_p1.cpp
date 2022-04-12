/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

#include <iostream>

using namespace std;

//defining variables
struct {
	string month;
	string day;
	int year;
} user;

//functions

int main() {

	// asking for user input
	cout << "What is the current month? ";
	cin >> user.month;

	cout << "What is the current day? ";
	cin >> user.day;

	cout << "What is the current year? ";
	cin >> user.year;

	// outputting date
	cout << "The date entered by user is: " << endl;
	cout << user.month << " " << user.day << ", " << user.year << endl;

	return 0;
}