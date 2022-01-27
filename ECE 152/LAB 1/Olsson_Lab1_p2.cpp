/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 1
Date: 01-12-2022
*/

#include <iostream>

using namespace std;

//setting variables to computation answers
long double a = (5 + 20 - 2);
long double b = ((8 % 5) / 6);
long double c = ((8 % 5 / 6.0) + 9.5);
long double d = (6 * 3 - (3 + 6));
long double e = (3 * 8 / (4 * 3));
long double f = (3.0 * 8 / (4 * 3));
long double g = (pow(1, 3) + pow(5, 3) + pow(3, 3));

int main() {
	//outputting answers
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;

	//cout << 9.5 + 0.3 << endl;		//test line

	return 0;
}