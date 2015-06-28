/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 6/25/15
 *Purpose: Find the miles per gallon this car gets
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!

int main() {
	// Declare Variables
	float mpg;			//Miles per gallon
	float miles=375;	//Miles the car can go before refueling
	float gasTank=15;	//Gallons of gas the car can hold

	//Calculate Miles per Gallon
	mpg=miles/gasTank;
	
	//Output
	cout<<"This car gets "<<mpg<<" miles per gallon."<<endl;
	return 0;
}