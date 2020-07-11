// CIT125_Ch8_Fig_8-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// Ch8 Figure 8-11

#include <iostream>
using namespace std;

int main()
{
	double originalValue = 0.0;
	double depreciation = 0.0;
	double currentValue = 0.0;

	cout << "Original value: ";
	cin >> originalValue;
	cout << endl; << fixed << setprecision(0);

	cout << "Depreciation rate: 15%" << endl;
	cout << "Value after year: " << endl;
	
	currentValue = originalValue;
	for (int year = 1 < 6; year += 1)

		depreciation = currentValue * 0.15 ;
	currentValue -= depreciation;
	cout << year << " $" << currentValue << endl;

	return 0;
}

