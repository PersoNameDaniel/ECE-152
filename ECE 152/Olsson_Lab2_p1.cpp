/*
Class: ECE15200
Author: Daniel Olsson
Assignment: Lab 2
Date: 1-26-2022
*/

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
	char ch = 'A';

	short snum = 10;
	int inum = 10000;
	long lnum = 200000;

	float fnum = 5.6;
	double dnum = 100.5;
	long double ldnum = 110000000.85;

	cout << left; // for left alignment
	cout << setw(20) << "Data type" << setw(10) << "Storage (in bytes)" << endl;
	cout << setw(20) << "char" << setw(20) << sizeof(char) << endl;
	cout << setw(20) << "short" << setw(20) << sizeof(short) << endl;
	cout << setw(20) << "int" << setw(20) << sizeof(int) << endl;
	cout << setw(20) << "long" << setw(20) << sizeof(long) << endl;
	cout << setw(20) << "float" << setw(20) << sizeof(float) << endl;
	cout << setw(20) << "double" << setw(20) << sizeof(double) << endl;
	cout << setw(20) << "long double" << setw(20) << sizeof(long double) << endl << endl;

	cout << left; // for left alignment
	cout << setw(20) << "Variable" << setw(10) << "Storage (in bytes)" << endl;
	cout << setw(20) << "ch" << setw(20) << sizeof(ch) << endl;
	cout << setw(20) << "snum" << setw(20) << sizeof(snum) << endl;
	cout << setw(20) << "inum" << setw(20) << sizeof(inum) << endl;
	cout << setw(20) << "lnum" << setw(20) << sizeof(lnum) << endl;
	cout << setw(20) << "fnum" << setw(20) << sizeof(fnum) << endl;
	cout << setw(20) << "dnum" << setw(20) << sizeof(dnum) << endl;
	cout << setw(20) << "ldnum" << setw(20) << sizeof(ldnum) << endl;

	return 0;
}

//output:
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Data type           Storage (in bytes)
char                1
short               2
int                 4
long                8
float               4
double              8
long double         16

Variable            Storage (in bytes)
ch                  1
snum                2
inum                4
lnum                8
fnum                4
dnum                8
ldnum               16
*/