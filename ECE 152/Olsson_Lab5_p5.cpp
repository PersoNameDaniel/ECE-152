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
int input[3];
int output[2];

//functions
void minMax(int input[3], int output[2]) {

	int max = input[0];
	int min = input[0];
	for (int i = 0; i < 3; i++) {

		if (max < input[i]) {
			max = input[i];
		}

		if (min > input[i]) {
			min = input[i];
		}
	}
	//cout << max << endl;

	/*int min = input[0];
	for (int i = 0; i < 3; i++) {

		if (min > input[i]) {
			min = input[i];
		}
	}*/
	//cout << min << endl;

	output[0] = min;
	output[1] = max;

	//tuple <int, int> tupleOutput;
	//tupleOutput = make_tuple(min, max);

	//return arrayOutput;
}

//main function
int main() {
	cout << "Enter integer 1: ";
	cin >> input[0];
	cout << endl << "Enter integer 2: ";
	cin >> input[1];
	cout << endl << "Enter integer 3: ";
	cin >> input[2];
	cout << endl;

	minMax(input, output);

	//cout << output[0] << endl << output[1] << endl;

	//int* ptr = minMax(input1, input2, input3);

	cout << "Minimum number is " << output[0] << " Maximum number is " << output[1] << endl;

	return 0;
}