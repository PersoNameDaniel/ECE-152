/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//stating variables
int R1;
int R2;
int V;

int main() {
	cout << "Enter the calues for R1 and R2: ";		//asking for input
	cin >> R1;										//receiving input for R1
	cout << " ";									//adding space for formatting
	cin >> R2;										//receiving input for R2
	cout << endl;									//line space for formatting

	cout << "Enter the value for V: ";		//asking for input
	cin >> V;								//receiving input for V
	cout << endl;							//space for formatting

	cout << "The value of I in series network: " << (V / (R1 + R2)) << endl;						//outputting series output
	cout << "The value of I in parallel network: " << ( V / ((R1 * R2) / (R1 + R2))) << endl;		//outputting parallel output



	return 0;
}