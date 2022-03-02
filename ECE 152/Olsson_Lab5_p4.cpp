/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 5
Date: 2-21-2022
*/

#include <iostream>
//#include <fstream>

using namespace std;

//defining variables
int randomNumber;
bool guessed;
int guess;


//functions


int main() {
	randomNumber = rand() % 99 + 1;
	guessed = false;
	cout << "I have a number between 1 and 100." << endl << "Can you guess my number?" << endl << "Please type your first guess: ";
	while (guessed == false) {
		cin >> guess;
		cout << endl;

		if (guess == randomNumber) {
			guessed = true;
			cout << "Excellent! You guessed the number!";
		}
		else if (guess <= randomNumber) {
			cout << "Too low. Try again." << endl;
		}
		else if (guess >= randomNumber) {
			cout << "Too high. Try again." << endl;
		}
	}
	


	return 0;
}