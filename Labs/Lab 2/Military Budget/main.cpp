/* 
 * File:   main.cpp
 * Author: Norman Lee
 * 
 * Created on June 24, 2015, 5:28 PM
 */

//System Libraries
#include <iostream> //I/O Library

using namespace std;//Namespace for iostream

//User Libraries

//Global Libraries

//Global Constants
const float CNVPCT=100.0f;//Conversion

//Function Prototypes

//Execution Begins Here!
int main() {
	// Declare and Initialize Variables
	float F_Bdgt=3.8e12f;    //Federal Budget in Dollars
	float M_Spnd=6.06e11f; //Military Spending in Dollars
	float pM_Spnd; //Percentage of Federal Budget used for Military
	// Calculate percentage
	pM_Spnd = M_Spnd/F_Bdgt*CNVPCT;
	//Output the results
	cout<<"The Percentage of the federal budget used for the military = "<<pM_Spnd<<endl;
	return 0;
}