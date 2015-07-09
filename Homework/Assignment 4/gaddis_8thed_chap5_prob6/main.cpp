/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/8/15
 *Purpose: Use a loop to output distance traveled for each hour from an input mph
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here


int main() {
	//Declare Variables
	float mph, dstnc;
	int hour;

	//Prompt Input for miles per hour
	cout << "Enter the mph of the vehicle:\n";
	cin >> mph;

	if (mph > 0)
	{
		cout << "Hours   Distance Traveled\n";
		cout << "---------------------------\n"; 

		for (hour = 1; hour <= 3; hour ++)
		{
			dstnc = mph * hour;
			cout << hour << "                " << dstnc << endl;
		}
	}
	else
	{
		cout << "Invalid Speed";
	}
	return 0;
}