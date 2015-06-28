/*
 *Filename: main.cpp
 *Author: Norman Lee
 *Created on 6/25/2015, 3:00pm
 *Purpose: Display rising ocean levels in 5, 7, 10 years
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here

int main() {
	//Declare and Initialize Variables
	float oLvlup=1.5f; //Rate ocean levels rise in millimeters
	float oLvl5;	//How much ocean levels would have risen in 5 years
	float oLvl7;	//How much ocean levels would have risen in 7 years	
	float oLvl10;	//How much ocean levels would have risen in 10 years
	//Calculate ocean levels after 5, 7, 10 years
	oLvl5=oLvlup*5; //Units in millimeters
	oLvl7=oLvlup*7; //Units in millimeters
	oLvl10=oLvlup*10; //Units in millimeters
	//Output results
	cout<<"Ocean levels in 5 years will be "<<oLvl5<<"mm higher."<<endl;
	cout<<"Ocean levels in 7 years will be "<<oLvl7<<"mm higher."<<endl;
	cout<<"Ocean levels in 10 years will be "<<oLvl10<<"mm higher."<<endl;
	return 0;
}