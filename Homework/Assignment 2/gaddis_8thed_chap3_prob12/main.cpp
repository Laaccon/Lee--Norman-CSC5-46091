/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/29/15
 *Purpose: Convert Celsius to Fahrenheit
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Properties
 
//Execution starts here
int main() {
	//Define Variables
	float tempc, tempf;
	
	//Input
	cout << "Enter the temperature in Celsius:";
	cin >> tempc;
	
	//Calculation
	tempf = 9 * tempc / 5 + 32;

	//Output
	cout << tempc << "degrees Celsius is " << tempf << " degrees Fahrenheit.\n" ;
	return 0;
}