/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/6/2015
 *Purpose: Determine phone charges by minutes and starting time of the call.
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
	//Declare variables
	float rate, start, time, charge;
	
	//Prompt input for phone call start time and length
	cout << "Enter the time when the call started(use HH.MM for the hour and minute respectively) :\n";
	cin >> start;
	cout << "Enter the duration of the call:\n";
	cin >> time;
	
	//Determine the rate by the time and 
	if ((start - static_cast<int>(start)) < 0.59 && start < 24 && start >= 0)
	{
             cout << setprecision(2) << showpoint << fixed;
		if (start > 0.00 && start <= 6.59)
		{
			rate = 0.05;
		}	
		else if (start >= 7.00 && start <= 19.00)
		{
			rate = 0.45;
		}
		else
		{
			rate = 0.2;
		}
		charge = rate * time;
		cout << "The customer is charged $" << charge << " for the call.\n";
	}
	else
	{	
		cout << "You entered an invalid time.";
	}
	
	return 0;
}