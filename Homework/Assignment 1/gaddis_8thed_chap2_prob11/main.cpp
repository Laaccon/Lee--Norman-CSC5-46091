/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/27/15
 *Purpose: Find the distance per tank of gas
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here
int main() {
	//Define Variables
	float tank = 20; //The car's tank hold 20 gallons
	float twnMpg = 23.5; //The car gets 23.5 miles per gallon in town
	float hwMpg = 28.9; //The car gets 28.6 miles per gallon on the highway
	float twnDst;  //How many miles traveled on 1 tank in town
	float hwDst;  //How many miles traveled on 1 tank on the highway
	
	//Calculate Distance Traveled on 1 tank
	twnDst = tank * twnMpg;
	hwDst = tank * hwMpg;

	//Output
	cout << "The car can travel " << twnDst <<" miles per gallon in town and " << hwDst << " miles per gallon on the highway.\n";
	return 0;
}