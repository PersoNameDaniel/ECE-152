/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 7
Date: 3-07-2022
*/

#include <iostream>

using namespace std;

//defining variables

//functions
void show(float (*rates)[9]) {
	for (int i = 0; i <= 8; i++) {
		cout << "value number " << (i + 1) << " is: " << *rates << *(rates + i) << endl;
	}
}

int main() {
	float rates[9] = {6.5, 7.2, 7.5, 8.7, 8.6, 9.4, 9.6, 9.8, 10.6};

	show(&rates);

	return 0;
}