/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 6/28/15
 *Purpose:  Determine how many calories someone has consumed by number of cookies
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!

int main() {
	// Declare Variables
	float bag = 30; //Cookies per bag
	float serv = 10; //Servings per bag
	float calServ = 100;  // Calories per serving
	float calBag; //Calories per bag
	float calCkie; //Calories per cookie
	float cookie; //Number of cookies eaten
	float calAte; //Calories consumed

	// Input
	cout << "Enter how many cookies you ate:";
	cin  >> cookie;
	
	// Calculate
	calBag = calServ * serv;
	calCkie = calBag / bag;
	calAte = cookie * calCkie;

	// Output
	cout << "You have consumed " << calAte << " calories.\n"; 
	return 0;
}