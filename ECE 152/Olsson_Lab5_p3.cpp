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
int firstRandomNumber;
int secondRandomNumber;
float runningScore;
int numberOfCorrectAnswers;
int symbolGenerator;



//functions

//question generation
int generateQuestion() {
	firstRandomNumber = rand() % 100 + 1;
	secondRandomNumber = rand() % 100 + 1;
	symbolGenerator = rand() % 3 + 1;
	switch (symbolGenerator) {
	case 1:

	break;

	case 2:

	break;

	case 3:

	break;

	}
}


int main() {


	return 0;
}