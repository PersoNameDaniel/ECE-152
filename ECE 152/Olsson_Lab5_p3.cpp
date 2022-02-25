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
int score;
int numberOfCorrectAnswers;
int problemCounter;
int currentResult;

//functions

//question generation
int generateQuestion() {

	//defining function vairables
	int firstRandomNumber;
	int secondRandomNumber;
	int symbolGenerator;
	int answer;
	int userInput;

	cout << "What is the answer to ";

	symbolGenerator = rand() % 3 + 1;
	switch (symbolGenerator) {
	case 1:
		firstRandomNumber = rand() % 99 + 1;
		secondRandomNumber = rand() % 99 + 1;

		answer = (firstRandomNumber + secondRandomNumber);

		cout << firstRandomNumber << " + " << secondRandomNumber << endl;
		cin >> userInput;
		cout << endl;

		if (userInput == answer) {
			cout << "Correct" << endl;
			return 1;
		}
		else {
			cout << "Wrong" << endl;
			return 0;
		}
	break;

	case 2:
		firstRandomNumber = rand() % 100;
		secondRandomNumber = rand() % 100;

		answer = (firstRandomNumber - secondRandomNumber);

		cout << firstRandomNumber << " - " << secondRandomNumber << endl;
		cin >> userInput;
		cout << endl;

		if (userInput == answer) {
			cout << "Correct" << endl;
			return 1;
		}
		else {
			cout << "Wrong" << endl;
			return 0;
		}
	break;

	case 3:
		firstRandomNumber = rand() % 10;
		secondRandomNumber = rand() % 10;

		answer = (firstRandomNumber * secondRandomNumber);

		cout << firstRandomNumber << " * " << secondRandomNumber << endl;
		cin >> userInput;
		cout << endl;

		if (userInput == answer) {
			cout << "Correct" << endl;
			return 1;
		}
		else {
			cout << "Wrong" << endl;
			return 0;
		}
	break;

	}
}


int main() {
	problemCounter = 0;
	for (problemCounter; problemCounter <= 10; problemCounter++) {
		currentResult = generateQuestion();
		if (currentResult == 0) {
			continue;
		}
		if (currentResult == 1) {
			numberOfCorrectAnswers++;
				continue;
		}
	}

	score = (numberOfCorrectAnswers * 10);

	cout << "Your score in the quiz is " << numberOfCorrectAnswers << endl;

	if (numberOfCorrectAnswers >= 9) {
		cout << "Excellent, your are passed with 'A' grade!" << endl;
	}
	else if (numberOfCorrectAnswers >= 7) {
		cout << "Very Good, you are passed with 'B' grade!" << endl;
	}
	else if (numberOfCorrectAnswers >= 5) {
		cout << "Good, you are passed with 'C' grade!" << endl;
	}
	else if (numberOfCorrectAnswers < 5) {
		cout << "Sorry, we cannot pass you in the quiz!" << endl;
	}

	return 0;
}