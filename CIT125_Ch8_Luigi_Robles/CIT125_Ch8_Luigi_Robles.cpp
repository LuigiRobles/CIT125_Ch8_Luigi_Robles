// CIT125_Ch8_Luigi_Robles.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Intro to C++ Luigi Robles
// 07-11-2020 Summer Term
// Ch8 Figure 8-8 The Clock Program

#include <iostream>
using namespace std;

int main()
{
    //output part of IPO
	cout << "Minutes	Seconds" << endl;
    //outter for loop
	for (int minutes = 0; minutes < 2; minutes += 1)
	{
        //nested for loop
		for (int seconds = 0; seconds < 3; seconds += 1)
			cout << "	" << minutes
			<< "		" << seconds << endl;
		//end for
		cout << endl;
	} // end for 
	return 0;
} // end of main function
