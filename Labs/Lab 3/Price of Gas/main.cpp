/*
 *File: main.cpp
 *Author: Norman Lee
 *Created on 6/25/2015 1:49pm
 *Purpose: Determining the base price and total taxes on gasoline
*/

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVPCT=100.0f; //Conversion to percentage
//Function Prototype

//Execution begins here!

int main() {
	//Declare Variables
	float fedTax=0.18f;   //Federal Tax $'s 
	float calTax=0.36f;   //California Tax $'s 
	float slsTax=0.08f;  //California Sales Tax % 
	float gallon=3.69f;   //Price of a gallon of gas $'s with all taxes included
	float baseprc; 		// Base price of gas before taxes
	float effTax; 		//Effective tax rate
	float TaxperG; 		//tax per gallon
	//Calculations
	baseprc=(gallon-fedTax-calTax)/(1+slsTax);
	TaxperG=gallon-baseprc;
	effTax=TaxperG/gallon*CNVPCT;
	//Output
	cout <<"The base price of gasoline is $"<<baseprc<<endl;
	cout <<"The effective tax rate is "<<effTax<<"%"<<endl;
	//Pray this works
	return 0;
}