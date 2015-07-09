/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/8/15
 *Purpose:
*/

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main() {
	//Declare Variables
	float tempc, tempf;
 
 
	//Calculation
	for (tempc = 0; tempc <= 20; tempc++)
	{
		tempf = 9 * tempc / 5 + 32;
		cout << tempc << " degrees Celsius is " << tempf << " degrees Fahrenheit.\n";
	}	 
	return 0;
}