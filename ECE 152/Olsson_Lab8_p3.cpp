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

void reverse(char s[]);


int main() {
	cout << "Please enter word or phrase to reverse" << endl;
	cin >> userInput;

	for (int i = 0; i < size(userInput); i++) {
		userArray[i] = userInput.at(i);
	}

	/*char inputAsArray[userInput.size() + 1];
	strncpy(inputAsArray, userInput.c_str(), userInput.size() + 1);

	reverse(userInput.c_str());*/

	reverse(userArray);

	return 0;
}

//functions
void reverse(char s[]) {
	int arraySize = (sizeof(s) / sizeof(s[0]));
	//int arraySize = 5;
	cout << "arraySize = " << arraySize << endl;
	char reverseString[5] = {};
	for (int i = 0; i < arraySize; i++) {
		reverseString[arraySize - i] = s[i];
		cout << "s[" << i << "] = " << s[i] << endl;
	}

	cout << "string reversed: " << endl;
	for (int i = 0; i < arraySize + 1; i++) {
		cout << reverseString[i];
	}
}
