/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 8
Date: 04-05-2022
*/

#include <iostream>

using namespace std;

//defining variables
char str[37] = {'C', 'p', 'l', 'u', 's', 'p', 'l', 'u', 's', 'i', 's', 'a', 's', 'i', 'm', 'p', 'l', 'e',
	'p', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', 'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e'};
char Pt[37];
int numberOfp = 0;

//functions

int main() {
	for (int i = 0; i <= 36; i++) {
		Pt[i] = *(str + i);
	}

	for (int i = 0; i <= 36; i++) {
		if (Pt[i] == 'p') {
			numberOfp++;
		}
	}
	cout << "There are " << numberOfp << " 'p's in the string." << endl;
	return 0;
}