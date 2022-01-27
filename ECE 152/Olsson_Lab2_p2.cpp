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

	cout << left; // for left alignment

	cout << setw(20) << "Data type" << setw(20) << "Min value" << setw(20)
		<< "Max value" << endl;

	cout << setw(20) << "short"
		<< setw(20) << numeric_limits<short>::min()
		<< setw(20) << numeric_limits<short>::max()
		<< endl;

	cout << setw(20) << "unsigned short"
		<< setw(20) << numeric_limits<unsigned short>::min()
		<< setw(20) << numeric_limits<unsigned short>::max()
		<< endl;

	cout << setw(20) << "int"
		<< setw(20) << numeric_limits<int>::min()
		<< setw(20) << numeric_limits<int>::max()
		<< endl;

	cout << setw(20) << "unsigned int"
		<< setw(20) << numeric_limits<unsigned int>::min()
		<< setw(20) << numeric_limits<unsigned int>::max()
		<< endl;

	cout << setw(20) << "long"
		<< setw(20) << numeric_limits<long>::min()
		<< setw(20) << numeric_limits<long>::max()
		<< endl;

	cout << setw(20) << "unsigned long"
		<< setw(20) << numeric_limits<unsigned long>::min()
		<< setw(20) << numeric_limits<unsigned long>::max()
		<< endl;

	cout << setw(20) << "float"
		<< setw(20) << numeric_limits<float>::min()
		<< setw(20) << numeric_limits<float>::max()
		<< endl;

	cout << setw(20) << "double"
		<< setw(20) << numeric_limits<double>::min()
		<< setw(20) << numeric_limits<double>::max()
		<< endl;

	cout << setw(20) << "long double"
		<< setw(20) << numeric_limits<long double>::min()
		<< setw(20) << numeric_limits<long double>::max()
		<< endl;

	return 0;
}

//output
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Data type           Min value           Max value
short               -32768              32767
unsigned short      0                   65535
int                 -2147483648         2147483647
unsigned int        0                   4294967295
long                -92233720368547758089223372036854775807
unsigned long       0                   18446744073709551615
float               1.17549e-38         3.40282e+38
double              2.22507e-308        1.79769e+308
long double         3.3621e-4932        1.18973e+4932
*/