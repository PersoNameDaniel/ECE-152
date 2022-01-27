/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>

using namespace std;

//stating variables
long double sphereRadius;			//radius of sphere that will be user input
long double sphereSurfaceArea;		//calculated surface area value of sphere
long double sphereVolume;			//calculated volume value of sphere

int main() {
	//user input
	cout << "Enter the radius of the sphere: ";		//displaying question to user
	cin >> sphereRadius;							//asking for input from user
	cout << endl;									//skipping line for formatting

	//calculation
	sphereSurfaceArea = 4 * 3.1416 * pow(sphereRadius, 2);		//calculating surface area of sphere
	sphereVolume = (4 / 3) * 3.1416 * pow(sphereRadius, 3);		//calculating volume of sphere

	//displaying outputs
	cout << "The surface area of a sphere with a radius of " << sphereRadius << " is: " << sphereSurfaceArea << endl;		//outputting surface area of sphere
	cout << "The volume of a sphere with a radius of " << sphereRadius << " is: " << sphereVolume << endl;					//outputting volume of sphere

	return 0;
}