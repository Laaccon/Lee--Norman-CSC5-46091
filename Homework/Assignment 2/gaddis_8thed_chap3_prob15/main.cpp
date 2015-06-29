/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 6/29/15
 *Purpose: Determine assessment value of a house and the property tax
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here!

int main() {
	// Define Variables
	float ptxrate = 0.0075; //property tax rate .75c for every $100
	float asescnv = 0.6; //assessment conversion, 60%
	float asesVal, realVal, proptax; //house's assesment value, real value, and property tax

	//Input real value of house
	cout << "Enter the actual value of the house(in dollars): ";
	cin.ignore(100,'$') >> realVal;
	
	//Calculate property tax and assessment value
	asesVal = realVal * asescnv;
	proptax = asesVal * ptxrate;

	//Output
	cout << setprecision(2) << fixed;
	cout << "The house has an assessment value of $" << asesVal << " and property tax of $" << proptax << endl;

	return 0;
}