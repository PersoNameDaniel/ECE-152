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
char userArray[50000];

void reverse(char s[]);


int main() {
	cout << "Please enter a word to be reversed" << endl;
	cin >> userInput;

	for (int i = 0; i < size(userInput); i++) {
		userArray[i] = userInput.at(i);
	}

	reverse(userArray);

	return 0;
}

//functions
void reverse(char s[]) {
	// int arraySize = (sizeof(s) / sizeof(s[0]));
	int arraySize = 50000;
	char reverseString[50000] = {};
	for (int i = 0; i < arraySize; i++) {
		reverseString[arraySize - i] = s[i];
	}

	cout << "string reversed: ";
	for (int i = 0; i < arraySize + 1; i++) {
		cout << reverseString[i];
	}
}
