// CIT125-Ch8_FIg_8-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// 07-11-2020 Summer Term
// Ch8 Figure 8-12 Modified Car Depreciation Program

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

	//outter for loop
	for (double rate = 0.15; rate < 0.26; rate += 0.05)
	{
		cout << "Depreciation rate: " << rate * 100 << "%" << endl; //processing part of IPO
		cout << "Value after year: " << endl;

		currentValue = originalValue;
		//nested for loop
		for (int year = 1; year < 6; year += 1)
		{
			depreciation = currentValue * rate;
			currentValue -= depreciation;
			cout << year << " $" << currentValue << endl; //output part of IPO
		}	//end nested for loop
		cout << endl;
	}	// end outter for loop

	return 0;
}	//end of main function
