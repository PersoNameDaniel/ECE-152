/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 7
Date: 3-07-2022
*/

#include <iostream>

using namespace std;

//defining variables
int userArray[10][15];

//functions
void findmax(int userArray[10][15]) {

	//defining function variables
	int max = 0;
	int maxRow;
	int maxColumn;

	//finding max integer
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 14; j++) {
			if (max < userArray[i][j]) {
				max = userArray[i][j];
				maxRow = i;
				maxColumn = j;
			}
		}
	}
	//displaying result
	cout << "Max integer in array is: " << max << endl;
	cout << max << " is located at " << maxRow << ", " << maxColumn << endl;
}

int main() {

	//seeding rand
	srand(time(0));

	//populating massive array
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 14; j++) {
			userArray[i][j] = rand() % 100 + 1;
		}
	}

	findmax(userArray);

	//uncomment below to display entire array

	/*
	for (int i = 0; i <= 9; i++) {
		cout << endl;
		for (int j = 0; j <= 14; j++) {
			cout << userArray[i][j] << ", ";
		}
	}
	*/
	return 0;
}