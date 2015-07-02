/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/1/15
 *Purpose: Currency conversion
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins
int main() {
	// Declare Variables
	const float YpD = 98.93; //Yen per Dollar
	const float EpD = 0.74; //Euro per Dollar
	float dollar, yen, euro;
	
	// Input and prompt for input
	cout << "Enter the amount of dollars you wish to convert:";
	cin >> dollar;
	
	// Calculate conversions
	yen = dollar * YpD;
	euro = dollar * EpD;

	//Output
	cout << setprecision(2) << showpoint << fixed;
	cout << "$" << dollar << " converts to " << yen << " yen or " << euro << " euros." ;
	return 0;
}