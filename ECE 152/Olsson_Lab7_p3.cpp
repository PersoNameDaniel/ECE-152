/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 7
Date: 3-07-2022
*/

#include <iostream>

using namespace std;

//defining variables
float studentGradeArray[3][4];

//functions

int main() {

	//seeding rand
	srand(time(0));

	//populating slightly less massive array
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 3; j++) {
			studentGradeArray[i][j] = rand() % 61 + 40;
		}
	}

	//uncomment below to display entire array

	
	for (int i = 0; i <= 2; i++) {
		cout << endl;
		for (int j = 0; j <= 3; j++) {
			cout << studentGradeArray[i][j] << ", ";
		}
	}
	

	return 0;
}