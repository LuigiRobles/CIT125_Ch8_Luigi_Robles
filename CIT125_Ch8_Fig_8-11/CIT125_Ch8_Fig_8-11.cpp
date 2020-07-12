// CIT125_Ch8_Fig_8-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// 07-11-2020 Summer Term
// Ch8 Figure 8-11 The Car Depreciation Program

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    //declare and initialize variables
	double originalValue = 0.0;
	double depreciation = 0.0;
	double currentValue = 0.0;

    //input part of IPO
	cout << "Original value: ";
	cin >> originalValue;
	cout << endl << fixed << setprecision(0);

    //output part of IPO
	cout << "Depreciation rate: 15%" << endl;
	cout << "Value after year: " << endl;
	
    //processing part of IPO
	currentValue = originalValue;
    //for loop to process depreciation for each year up to 5 years
	for (int year = 1; year < 6; year += 1)
	{
		depreciation = currentValue * 0.15;
		currentValue -= depreciation;
		cout << year << " $" << currentValue << endl;
	} // end for
	return 0;
}	//end of main function


