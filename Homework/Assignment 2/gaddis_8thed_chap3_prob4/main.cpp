/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/28/2015
 *Purpose:  Ask for the name of 3 months and rainfall, then average them
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main() {
	//Declare Variables
	string month1, month2, month3;
	float rain1, rain2, rain3;
	float avgRain;

	//Input
	cout << "Enter the name of a month:";
	cin >> month1;
	cout << "Enter the amount of rainfall in " << month1 << " in inches:";
	cin >> rain1;
	cout << "Enter the name of another month:";
	cin  >> month2;
	cout << "Enter the amount of rainfall in " << month2 << " in inches:";
	cin >> rain2;
	cout << "Enter the name of another month:";
	cin >> month3;
	cout << "Enter the amount of rainfall in " << month3 << " in inches:";
	cin >> rain3;

	//Calculations
	avgRain = (rain1 + rain2 + rain3) / 3;

	//Output	
	cout << setprecision(2) << fixed; 
	cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avgRain << " inches." << endl;
	return 0;
}