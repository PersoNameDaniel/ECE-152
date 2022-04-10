/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 8
Date: 04-05-2022
*/

#include <iostream>

using namespace std;

//defining variables
int userInput[5];

//functions

int main() {
	for (int i = 0; i <= 4; i++) {
		cout << "Please enter integer " << i+1 << ": " ;
		cin >> *(userInput+i);
	}
	for (int i = 0; i <= 4; i++) {
		cout << "Position " << i + 1 << ": ";
		cout << userInput[i] << endl;
	}
	return 0;
}