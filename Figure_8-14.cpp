// CIT125_Ch8_Fig_8-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// 07-11-2020 Summer Term
// Ch.8 Figure 8-14 Lab 8-1

#include <iostream>
using namespace std;

int main()
{
	//declare and intialize variables
	int maxRows = 0;

	//input part of IPO
	cout << "Maxium number of rows: ";
	cin >> maxRows;

	//outter loop
	for (int row = 0; row < maxRows; row += 1)
	{
		for (int space = 0; space < maxRows - row; space += 1) //nested for loop 1
			cout << " ";
		//end for
		
		for (int asterisk = 0; asterisk <= row; asterisk += 1) //nested for loop 2
			cout << "* ";
		//end for

		cout << endl;
	}	//end for
	return 0;
}	//end of main function
