// CIT125_Ch8_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// Ch8 Figure 8-8


#include <iostream>
using namespace std;

int main()
{
	cout << "Minutes	Seconds" << endl;
	for (int minutes = 0; minutes < 2; minutes += 1)
	{
		for (int seconds = 0; seconds < 3; seconds += 1)
			cout << "	" << minutes
			<< "		" << seconds << endl;
		//end for
		cout << endl;
	} // end for 
	return 0;
} // end of main function

