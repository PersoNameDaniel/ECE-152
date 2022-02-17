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

	/*
	finding length of variable, comparing first to last moving towards center
	if test ever fails it will exit code and not display anything as asked
	if test never fails it will exit for loop and display "*input* is a palindrome"
	*/

	inputLength = input.size();
	//cout << inputLength << endl;
	for (int n = 0; n < (inputLength / 2); n++) {
		if (input.at(0 + n) != input.at((inputLength - n) - 1)) {
			cout << "Not Palindrome" << endl;
			exit(0);
		}
	}
	cout << input << " is a palindrome" << endl;
	exit(0);

	return 0;
}