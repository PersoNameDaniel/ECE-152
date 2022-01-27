/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 3
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//defining variables
long double numericalGrade;		//numerical grade for user input
char letterGrade;				//letter grade for user output


int main() {
	//getting user input
	cout << "Please Enter numerical grade: ";		//displaying question to user
	cin >> numericalGrade;							//receiving input
	cout << endl;									//new line for formatting

	if (numericalGrade >= 91) {										//if statement for A
		//cout << "A" << endl;										//debug output for A
		letterGrade = 'A';											//setting letter grade to A
	}																//computation are the same for all
	else if (numericalGrade < 91 && numericalGrade >= 81) {
		//cout << "B" << endl;
		letterGrade = 'B';
	}
	else if (numericalGrade < 81 && numericalGrade >= 71) {
		//cout << "C" << endl;
		letterGrade = 'C';
	} 
	else if (numericalGrade < 71 && numericalGrade >= 61) {
		//cout << "D" << endl;
		letterGrade = 'D';
	} 
	else if (numericalGrade < 61) {
		//cout << "F" << endl;
		letterGrade = 'F';
	} 
	else {								//else statement for error state
		cout << "Error" << endl;		//error output
		exit;							//stopping program
	}

	//outputting answer
	cout << "The letter grade you got is " << letterGrade << endl;		//displaying answer
	//cout << "Number is " << numericalGrade << endl;					//debug number grade output

	return 0;
}