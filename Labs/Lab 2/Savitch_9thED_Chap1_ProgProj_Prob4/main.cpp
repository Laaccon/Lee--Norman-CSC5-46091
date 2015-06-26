/* 
 * File:   main.cpp
 * Author: Norman Lee
 *
 * Created on June 24, 2015, 5:22 PM
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std; //Namespace for iostream

//User Libraries

//Global Constants
const float GRAVITY=3.2174e1f;//Acceleration due to Gravity Earth (ft/sec^2)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
	// Declare Variables
	//dstnce=The distance dropped in (ft)
	//time=Time in (secs)
	float dstnce, time;
	//Prompt then Input the time
	cout<<"To calculate the Distance Dropped\n";
	cout<<"Input the Time in Seconds"<<endl;
	cout<<"Time should be in floating point format\n";
	cin>>time;
	//Calculate the free-fall distance
	//dstnce=1/2*GRAVITY*time*time;//Incorrect
	dstnce=GRAVITY*time*time/2;//Correct
	//Output the results
	cout<<"The distance traveled = ";
	cout<<dstnce<<"(ft)"<<endl;
	//Exit stage right!
	return 0;
}