/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//stating variables
int ix1;				//value for x1 coordinate
int iy1;				//value for y1 coordinate
int iz1;				//value for z1 coordinate
int ix2;				//value for x2 coordinate
int iy2;				//value for y2 coordinate
int iz2;				//value for z2 coordinate
double answer;		//value of the output

int main() {
	cout << "Enter the co-ordinates of first point (x1, y1, z1): ";		//asking for xyz1 inputs
	cin >> ix1 >> iy1 >> iz1;											//getting inputs
	cout << endl;														//space for formatting

	cout << "Enter the co-ordinates of second point (x2, y2, z2): ";		//asking for xyz2 inputs
	cin >> ix2 >> iy2 >> iz2;												//getting inputs
	cout << endl;															//space for formatting

	answer = sqrt((pow((ix2 - ix1), 2) + (pow((iy2 - iy1), 2)) + (pow((iz2 - iz1), 2))));		//computing answer

	cout << "Distance between two ponts is: " << answer << endl;		//outputting answer

	return 0;
}