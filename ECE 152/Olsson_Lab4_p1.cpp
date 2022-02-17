/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 4
Date: 2-9-2022
*/

#include <iostream>
#include <fstream>

using namespace std;

//defining variables
string input;			//user input
int inputLength;		//length of user input integer



int main() {

	//getting user input from user
	cout << "Please Enter integer: ";
	cin >> input;
	cout << endl;

	//finding length of variable, comparing first to last moving in.
	inputLength = input.size();
	for (int n = 0; n <= inputLength; n++) {
		if (input.at(0 + n) != input.at(inputLength - n)) {
			cout << "Not Palindrome" << endl;
		exit(0);
		}
		else {
			cout << "Palindrome" << endl;
		}
	}
	return 0;
}