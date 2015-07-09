/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 7/8/15
 *Purpose: Calculate a salary based on doubling starting with a penny
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution begins here

int main() {
	//Declare Variables
	float salary = 1;
	int day, days; //day = each day, days = total days
	
	//Prompt for the input, number of days
	cout << "Your salary is 1 cent, but doubles every day.\n";
	cout << "Enter the number of days:\n";
	cin >> days;
	
	//Calculate and display each day's earnings

	for (day = 1; day <= days; day++)
	{
		salary *= 2;
		cout << setprecision(2) << showpoint << fixed;
		salary /= 100;
		cout << "Day " << day << " you earned $" << salary << endl;
		salary *= 100;
	}

	return 0;
}