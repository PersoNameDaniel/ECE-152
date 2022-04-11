/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 8
Date: 04-05-2022
*/

#include <iostream>

using namespace std;

//defining variables
string userInput;
char userArray[5];


//functions
void reverse(char s[]) {
	char reverseString[5];
	for (int i = 0; i < size(userInput); i++) {
		reverseString[(size(userInput) - i)] = s[i];
		cout << "f1 " << i << endl;
	}

	cout << "string reversed: " << endl;
	for (int i = 0; i < size(userInput); i++) {
		cout << reverseString[i];
	}
}

int main() {
	cout << "Please enter word or phrase to reverse" << endl;
	cin >> userInput;

	for (int i = 0; i < size(userInput); i++) {
		userArray[i];
	}

	reverse(userArray);

	return 0;
}