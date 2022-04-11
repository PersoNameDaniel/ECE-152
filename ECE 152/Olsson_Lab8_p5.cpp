/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 8
Date: 04-05-2022
*/

#include <iostream>

using namespace std;

//defining variables

//functions

int main() {
	//defining variables
	double miles[10] = {240.5, 300, 189.6, 310.6, 280.7, 206.9, 199.4, 160.3, 177.4, 192.3};
	double gallons[10] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
	double mpg[10];

	//doing calculations for mpg
	for (int i = 0; i <= 9; i++) {
		mpg[i] = ( *(miles + i) / *(gallons + i));
	}

	cout << "mpg calculations are: " << endl;
	for (int i = 0; i <= 9; i++) {
		cout << *(mpg + i) << endl;
	}

	return 0;
}