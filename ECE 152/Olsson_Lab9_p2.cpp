/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 9
Date: 04-12-2022
*/

#include <iostream>

using namespace std;

// defining variables
struct car {
	int number;
	int miles;
	int gallons;
};

int totalMiles;
int totalGallons;
double totalMPG;

// functions

int main() {

	// did not ask for user input in the directions.
	// adding values to struct
	car id25;
	id25.number = 25;
	id25.miles = 1950;
	id25.gallons = 65;

	car id36;
	id36.number = 36;
	id36.miles = 3260;
	id36.gallons = 130;

	car id44;
	id44.number = 44;
	id44.miles = 1789;
	id44.gallons = 68;

	car id52;
	id52.number = 52;
	id52.miles = 2367;
	id52.gallons = 110;

	car id68;
	id68.number = 68;
	id68.miles = 2135;
	id68.gallons = 153;

	// outputting values
	cout << "car ID number 25: " << id25.number << ", " << id25.miles << " Miles Driven, " << id25.gallons << " Gallons used" << (id25.miles / id25.gallons) << "MPG" << endl;
	cout << "car ID number 36: " << id36.number << ", " << id36.miles << " Miles Driven, " << id36.gallons << " Gallons used" << (id36.miles / id36.gallons) << "MPG" << endl;
	cout << "car ID number 44: " << id44.number << ", " << id44.miles << " Miles Driven, " << id44.gallons << " Gallons used" << (id44.miles / id44.gallons) << "MPG" << endl;
	cout << "car ID number 52: " << id52.number << ", " << id52.miles << " Miles Driven, " << id52.gallons << " Gallons used" << (id52.miles / id52.gallons) << "MPG" << endl;
	cout << "car ID number 68: " << id68.number << ", " << id68.miles << " Miles Driven, " << id68.gallons << " Gallons used" << (id68.miles / id68.gallons) << "MPG" << endl;

	// calculating total mpg
	totalMiles = ((id25.miles) + (id36.miles) + (id44.miles) + (id52.miles) + (id68.miles));
	totalGallons = ((id25.gallons) + (id36.gallons) + (id44.gallons) + (id52.gallons) + (id68.gallons));
	totalMPG = (totalMiles / totalGallons);

	// outputting total MPG
	cout << "Total MPG for entire fleet is: " << totalMPG << endl;

	return 0;
}