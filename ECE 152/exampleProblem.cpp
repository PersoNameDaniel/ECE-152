#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
#include <iomanip>   // needed for formatting
using namespace std;

int main()
{
	string filename = "prices.dat";  // put the filename up front
	ofstream outFile;

	outFile.open(filename.c_str());

	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}

	// set the output file stream formats
	outFile << setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint)
		<< setprecision(2);

	// send data to the file
	outFile << "Mats " << 39.95 << endl
		<< "Bulbs " << 3.022 << endl
		<< "Fuses " << 1.08 << endl;

	outFile.close();
	cout << "The file " << filename
		<< " has been successfully written." << endl;

	return 0;
}