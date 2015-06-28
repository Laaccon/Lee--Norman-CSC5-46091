/*
 *File:main.cpp
 *Author:Norman Lee
 *Date:6/27/15
 *Purpose: To determine the number of acres in a tract of land
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables
const float ACRCNVF = 43560; //Acres to square feet conversion
//Function Prototypes

//Execution starts here

int main() {
	//Declare Variables
	float land = 389767; //The tract of land we are using is 389,767 sq ft
	float landacr; //The tract of land in acres
	//Calculate
	landacr = land/ACRCNVF;
	//Output the results
	cout << "389,767 square feet equals " << landacr << " acres."<<endl;
	return 0;
}