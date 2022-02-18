/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 4
Date: 2-9-2022
*/

#include <iostream>
//#include <fstream>
//#include <cmath>

using namespace std;

//defining variables
int primes[21];		//array of stored prime numbers
int arrayPos;		//position in primes array
int num;			//number currently being checked for primeness
int divisor;		//current divisor checking numbers for primeness
int answer;

//Functions
int sumOfArray(int input[21], int arrayPos) {
	int output = 0;
	for (int n = 0; n < arrayPos; n++) {
		output = (input[n] + output);
	}
	return output;
}

int main() {
	//started at 101 and ended at 199 for added efficiency not processing any even numbers
	num = 101;
	arrayPos = 0;
	divisor = 3;
	while (num < 200) {
		if (divisor == (num - 1)) {
			//cout << "if " << arrayPos << endl;
			primes[arrayPos] = num;
			++arrayPos;
			divisor = 3;
			num++;
			num++;
			//continue;
		}
		else if ((num % divisor) == 0) {
			num++;
			num++;
			divisor = 3;
			//continue;
		}
		else {
			divisor++;
			//cout << "else " << divisor << " " << num << endl;
		}
	}

	cout << "answer is: " << sumOfArray(primes, arrayPos) << endl;



	return 0;
}