/* 
 * File:   main.cpp
 * Author: Norman Lee
 *
 * Created on June 24, 2015, 5:25 PM
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants
const float CNVPCT=100.0f;//Conversion

//Function Prototypes

//Execution Begins Here!

int main() {
	// Declare and Initialize Variables
	unsigned short cSurv=12467;//Number of customers surveyed
	unsigned short nEDrnks;    //Number of customers drinking 1 or more energy drink per week
	unsigned short nCDrnks;    //Number of energy drinkers that prefer citrus flavor
	unsigned char pEDrnks=14;  //Percent surveyed that prefer energy drinks
	unsigned char pCDrnks=64;  //Percent of energy drinkers that prefer citrus flavor
	//Calculate the number of drinkers
	nEDrnks=cSurv*pEDrnks/CNVPCT;
	nCDrnks=nEDrnks*pCDrnks/CNVPCT;
	//Output the results
	cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
	cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
	return 0;
}