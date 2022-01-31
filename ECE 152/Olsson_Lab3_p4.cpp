/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 3
Date: 1-29-2022
*/

#include <iostream>

using namespace std;

//defining variables
int sideA;		//user input triangle side A
int sideB;		//^^ B
int sideC;		//^^ C		
int operation;					//user input for desired operation
string triangleType;			//calculated type
float trianglePerimeter;		//calculated perimeter
float triangleArea;				//calculated area
float triangleHeight;			//calculated height



int main() {
	//asking for user input
	cout << "Please enter integer for side A: ";		//asking user for input
	cin >> sideA;										//getting user input for side
	cout << endl;										//new line for formatting
	cout << "Please enter integer for side B: ";		//commands are the same for all three sides
	cin >> sideB;
	cout << endl;
	cout << "Please enter integer for side C: ";
	cin >> sideC;
	cout << endl;

	//asking for operation ID
	cout << "What operation would you like to do? " << endl << "For triangle type enter \"0\"" << endl << "For perimeter enter \"1\"" << endl << "for area enter \"2\"" << endl;		//asking user for input
	cin >> operation;																																									//getting user input

	if (operation == 0) {						//if statement for operation 0 (triangle type)
		if (sideA == sideB && sideB == sideC) {			//if statement for equilateral triangle
			triangleType = "equilateral";		//setting triangle type to equilateral
		}										//statements are similar for rest of operation 0 if statement
		else if (sideA == sideB) {				//if statement for isosceles triangle
			triangleType = "isosceles";
		}									
		else if (sideA == sideB) {		//if statement for isosceles triangle
			triangleType = "isosceles";
		}
		else if (sideB == sideC) {		//if statement for isosceles triangle
			triangleType = "isosceles";
		}
		else {		//else for scalene triangle
			triangleType = "scalene";
		}
		
		cout << "The triangle is a " << triangleType << " triangle." << endl;		//outputting answer for operation 0 (triangle type)
	}
	else if (operation == 1) {																		//if statement for operation 1 (perimeter)
		trianglePerimeter = (sideA + sideB + sideC);												//getting perimeter
		cout << "The perimeter of the triangle is " << trianglePerimeter << endl;					//outputting answer for operation 1 (perimeter)
	}
	else if (operation == 2) {																										//if statement for operation 2 (area)
		triangleHeight = ((sideA + sideB + sideC) / 2);																				//calculating triangle height
		triangleArea = (sqrt(triangleHeight * (triangleHeight - sideA) * (triangleHeight - sideB) * (triangleHeight - sideC)));		//calculating triangle area
		cout << "Area of the triangle is " << triangleArea << endl;																	//outputting answer for operation 2 (area)

	}
	else {						//error state for invalid input
		cout << "Error";		//displaying "error"
		exit(0);				//stopping program
	}

	return 0;
}