/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 5
Date: 2-21-2022
*/

#include <iostream>
//#include <tuple>
//#include <fstream>

using namespace std;

//defining variables
int input1;
int input2;
int input3;

//functions
int* minMax(int number1, int number2, int number3) {

	int numbers[3] = { number1, number2, number3 };

	int max = numbers[0];
	for (int i = 0; i < 3; i++) {

		if (max < numbers[i]) {
			max = numbers[i];
		}
	}

	int min = numbers[0];
	for (int i = 0; i < 3; i++) {

		if (min > numbers[i]) {
			min = numbers[i];
		}
	}

	int arrayOutput[2] = {min, max};

	//tuple <int, int> tupleOutput;
	//tupleOutput = make_tuple(min, max);

	return arrayOutput;
}

//main function
int main() {
	cout << "Enter integer 1: ";
	cin >> input1;
	cout << endl << "Enter integer 2: ";
	cin >> input2;
	cout << endl << "Enter integer 3: ";
	cin >> input3;
	cout << endl;

	int* ptr = minMax(input1, input2, input3);

	cout << "Minimum number was" << *ptr[0] << "Maximum number was" << *ptr[1] << endl;

	return 0;
}