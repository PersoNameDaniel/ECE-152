/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 6
Date: 2-28-2022
*/

#include <iostream>

using namespace std;

//defining variables
int scores[4][3] = {{96, 80, 89}, {76, 93, 85}, {66, 70, 82}, {90, 79, 87}};		//John = 0, Julie = 1, Kevin = 2, David = 3;    Math = 0, History = 1, Science = 2

//functions
void avgByStudent() {

	//calculating student totals
	int johnTotal = (scores[0][0] + scores[0][1] + scores[0][2]);
	int julieTotal = (scores[1][0] + scores[1][1] + scores[1][2]);
	int kevinTotal = (scores[2][0] + scores[2][1] + scores[2][2]);
	int davidTotal = (scores[3][0] + scores[3][1] + scores[3][2]);

	//calculating student averages
	int johnAverage = (johnTotal / 3);
	int julieAverage = (julieTotal / 3);
	int kevinAverage = (kevinTotal / 3);
	int davidAverage = (davidTotal / 3);

	//printing student averages
	cout << "John's average is " << johnAverage << ". Julie's average is " << julieAverage << ". Kevin's average is " << kevinAverage << ". David's average is " << davidAverage << "." << endl;
}

void avgBySubject() {

	//calculating subject totals
	int mathTotal = (scores[0][0] + scores[1][0] + scores[2][0] + scores[3][0]);
	int historyTotal = (scores[0][1] + scores[1][1] + scores[2][1] + scores[3][1]);
	int scienceTotal = (scores[0][2] + scores[1][2] + scores[2][2] + scores[3][2]);

	//calculating subject averages
	int mathAverage = (mathTotal / 4);
	int historyAverage = (historyTotal / 4);
	int scienceAverage = (scienceTotal / 4);

	//printing subject averages
	cout << "Math's average is " << mathAverage << ". History's average is " << historyAverage << ". Science's average is " << scienceAverage << "." << endl;
}

int main() {

	//calling functions
	avgByStudent();
	avgBySubject();

	return 0;
}