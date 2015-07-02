/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 7/1/15
 *Purpose: Calculate number of pizza slices
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float PI = 3.14159;

//Function Prototypes

//Execution begins

int main() {
	//Declare and Initialize Variables
	float diamtr, areaP, slices;
	float areaS = 14.125; //Area of a slice in inches

	//Input prompt for diameter of pizza
	cout << "Enter the diameter of the pizza in inches:";
	cin >> diamtr;
	
	//Calculate
	areaP = PI * (diamtr/2) * (diamtr/2);
	slices = areaP / areaS;

	//Output
	cout << "If you have a pizza with a diameter of " << diamtr << " inches,";
	cout << setprecision(0) << fixed; // Rounding the number of slices
	cout << " you can have " << slices << " slices.";
	return 0;
}