/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/1/15
 *Purpose: Calculate sin, cos, tan of an angle given in radians
*/

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
	// Declare and initialize variables
	float angle, sinA, cosA, tanA;
	
	//Input angle
	cout << "Enter an angle in radians:";
	cin >> angle;
	
	//Calculations
	sinA = sin(angle);
	cosA = cos(angle);
	tanA = tan(angle);

	//Output
	cout << setprecision(4) << showpoint << fixed;
	cout << " The sine of you angle is " << sinA << ". The cosine of your angle is " << cosA  << ". The tangent of your angle is " << tanA << "."<< endl;
	return 0;
}