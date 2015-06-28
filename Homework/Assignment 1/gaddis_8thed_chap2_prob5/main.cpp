/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/25/15
 *Purpose: Averaging 5 given values
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int main() {
	//Declare and Initialize Variables
	float num1=28.0f;
	float num2=32.0f;
	float num3=37.0f;
	float num4=24.0f;
	float num5=33.0f;
	float sum;
	float avg;

	//Calculate sum
	sum=num1+num2+num3+num4+num5;
	avg=sum/5;

	//Output
	cout<<"The average of 28, 32, 37, 24, and 33 is "<<avg<<endl;

	//Pray this works
	return 0;
}