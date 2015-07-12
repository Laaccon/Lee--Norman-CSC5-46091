/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Rainfall check for a period of years
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution Begins Here

int main() {
	//Declare Variables
	float rain, rainSum, rainAvg;
	int yr, years, mon, months; // years is total years, yr is the incrimental years, mon is for incremental months, and months is total months

	//Prompt Input for how many years
	cout << "How many years of rain would you like to record:";
	cin >> years;
	
	if (years >= 1 && rain >= 0)
	{
		for (yr = 1; yr <= years; yr++)
		{
			for (mon = 1; mon <= 12; mon++)
			{
			cout << "Enter the amount of rain for month " << mon << " of year " << yr << ":\n";
			cin >> rain;
			rainSum += rain;
			}
		}
                //Calculate average rainfall per month
                months = years * 12;
                rainAvg = rainSum / months;
                    
                cout << "Total months: " << months << endl;
                cout << "Total inches of rain: " << rainSum << endl;
                cout << "Average rainfall: " << rainAvg << endl;
	}
	else
	{
	cout << "Invalid Input";
	}

	return 0;
}