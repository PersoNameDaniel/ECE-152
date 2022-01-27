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

	} else if (numericalGrade < 91 && numericalGrade >= 81) {		//if statement for B
		//cout << "B" << endl;										//debug output for B
		letterGrade = 'B';											//setting letter grade to B

	} else if (numericalGrade < 81 && numericalGrade >= 71) {		//if statement for C
		//cout << "C" << endl;										//debug statement for C
		letterGrade = 'C';											//setting letter grade to C

	} else if (numericalGrade < 71 && numericalGrade >= 61) {		//if statement for D
		//cout << "D" << endl;										//debug statement for D
		letterGrade = 'D';											//setting letter grade to D

	} else if (numericalGrade < 61) {								//if statement for F
		//cout << "F" << endl;										//debug statement for F
		letterGrade = 'F';											//setting letter grade for F

	} else {							//else statement for error state
		cout << "Error" << endl;		//error output
		exit;							//stopping program
	}

	//outputting answer
	cout << "The letter grade you got is " << letterGrade << endl;

	return 0;
}