/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 8
Date: 04-05-2022
*/

#include <iostream>

using namespace std;

//defining variables
int miles[7] = {15, 22, 16, 18, 27, 23, 20};
int dist[7];
//functions

int main() {
	for (int i = 0; i <= 6; i++) {
		dist[i] = *(miles + i);
	}

	for (int i = 0; i <= 6; i++) {
		cout << "array 'dist' position " << i << " is: " << dist[i] << endl;
	}

	return 0;
}