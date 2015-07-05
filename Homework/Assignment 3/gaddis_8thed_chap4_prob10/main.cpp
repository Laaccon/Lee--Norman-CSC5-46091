/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/2/15
 *Purpose: Determine the days in the month specified by the user
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution begins here

int main() {
	//Declare Variables
	unsigned int month, year;
	
	//Prompt Input
	cout << "Enter the number of the month(1-12):\n";
	cin >> month;
        cout << "Enter the year:\n";
        cin >> year;
        
	//Calculate
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		cout << "That month has 31 days.";
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout << "That month has 30 days.";
        }
	else if (month == 2)
	{
			if (year % 4 == 0)
				{
				cout << "This month has 29 days.";
				}
			else  
				{
				cout << "This month has 28 days.";
				}
	}
	else
	{
		cout << "Error: Invalid input";
	}
	
	return 0;
}