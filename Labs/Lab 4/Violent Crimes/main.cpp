/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 6/25/15 4:57PM
 *Purpose: Determine whether or not the English are more violent than Americans
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution starts here
int main() {
	//Define and Initialize Variables
	float USvc=1.188e7f; //11.8 Million Violent Crimes in the US
	float ENGvc=6.52e6f; //6.52 Million Violent Crimes in England
	float USpop=3.18e8f; //318 Million people in the US
	float ENGpop=6.4e7f; //64 Million people in England
	float USvcpc; //Violent Crimes per Capita in the US
	float ENGvcpc; //Violent Crimes per Capita in England

	//Calculate
	USvcpc=USvc/USpop;
	ENGvcpc=ENGvc/ENGpop;

	//Output results
	cout<<setprecision(2)<<fixed;
	cout<<"The United States has "<<USvcpc<<" violent crimes per capita."<<endl;
	cout<<"England has "<<ENGvcpc<<" violent crimes per capita."<<endl;
	//Pray this works
	return 0;
}