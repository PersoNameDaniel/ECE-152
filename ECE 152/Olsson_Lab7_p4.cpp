/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 7
Date: 3-07-2022
*/

#include <iostream>

using namespace std;

//defining variables
float prices[7] = { 12.25, 12.75, 19.50, 16.75, 8.30, 13.50, 19.2 };
float (*ptr)[7] = &prices;

//functions

int main() {

	for (int i = 0; i <= 6; i++) {
		cout << "Price number " << (i + 1) << " is: " << (*ptr)[i] << endl;
	}

	return 0;
}