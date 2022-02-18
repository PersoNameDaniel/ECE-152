/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 4
Date: 2-9-2022
*/

#include <iostream>
//#include <fstream>

using namespace std;

//defining variables
int display[13] = { 1, 3, 5, 7, 5, 3, 1, 3, 5, 7, 5, 3, 1 };

//functions
void asterisk() {
	cout << "*";
}
void space() {
	cout << " ";
}
void newLine() {
	cout << endl;
}

int main() {
	for (int n = 0; n < 13; n++) {
		switch (display[n]) {
			case 1:
				space();
				space();
				space();
				space();
				asterisk();
				newLine();
			break;

			case 3:
				space();
				space();
				asterisk();
				asterisk();
				asterisk();
				newLine();
			break;

			case 5:
				space();
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				newLine();
			break;

			case 7:
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				asterisk();
				newLine();
			break;

		}
	}

	return 0;
}