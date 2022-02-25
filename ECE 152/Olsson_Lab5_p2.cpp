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
int firstRandom;
int secondRandom;
string userContinue;
bool endure;
int userAnswer;
int failCount;



//functions



int main() {
	endure = true;

	//first random numbers
	firstRandom = rand() % 100 + 1;
	secondRandom = rand() % 100 + 1;

	while (endure == true) {

		//asking user for answer
		cout << "How much is " << firstRandom << " * " << secondRandom << "?" << endl;
		cin >> userAnswer;

		//if user gets the answer correct
		if (userAnswer == (firstRandom * secondRandom)) {

			//generating new random numbers and resetting counters
			firstRandom = rand() % 100 + 1;
			secondRandom = rand() % 100 + 1;
			failCount = 0;

			cout << "Very Good!" << endl;
			cout << "Would You like to continue? Enter 'Yes' to continue or 'No' to stop." << endl;
			cin >> userContinue;
			cout << endl;
			if ((userContinue == "Yes") or (userContinue == "yes")) {
				continue;
			}
			else if ((userContinue == "No") or (userContinue == "no")) {
				endure = false;
				continue;
			}

		}
		//if the user gets the answer wrong
		else {
			cout << "No. Please try again." << endl;
			failCount++;
				if (failCount >= 5) {
					cout << "Let's try another one!" << endl;
					firstRandom = rand() % 100 + 1;
					secondRandom = rand() % 100 + 1;
					failCount = 0;
					continue;
				}
				else {
					continue;
				}
		}
	}

	return 0;
}