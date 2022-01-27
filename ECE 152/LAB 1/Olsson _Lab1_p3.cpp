/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 1
Date: 01-12-2022
*/

#include <iostream>

using namespace std;

int main() {

	//declaring variables
	int length = 20;
	int width = 16;
	int area = length * width;
	int perimeter = 2 * (length + width);

	//displaying values
	cout << "The area of the rectangle is " << area << endl;
	cout << "The perimeter of the rectangle is " << perimeter << endl;

	return 0;
}