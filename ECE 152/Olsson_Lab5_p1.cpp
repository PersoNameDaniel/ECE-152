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
int userInput;


//functions

//function checks if number is prime, returns "1" if it is prime "0" if it is not prime.
int isPrime(int n) {
	int divisor = 3;
	while (divisor < n) {
		if (divisor == (n - 1)){
			return 1;
		}
		else if ((n % divisor) == 0) {
			return 0;
		}
		else {
			divisor++;
		}
	}
}

//function that finds all primes including and between 2 - number.
int countPrime(int m) {
	int primes = 0;
	for (m; m <= 2; m--) {
		if (isPrime(m) == 1) {
			primes++;
		}
	}
	return primes;
}


int main() {
	cout << "Please enter integer to be computed: ";
	cin >> userInput;
	cout << endl;

	cout << "There are " << countPrime(userInput) << " prime numbers between " << userInput << " and 2." << endl;



	return 0;
}