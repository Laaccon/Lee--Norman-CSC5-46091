/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/2/15
 *Purpose: Mixing Colors
*/

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins

int main() {
	//Declare and Initialize Variables
	string color1 = "", color2 = "";
	
	//Prompt and Input colors
	cout << "Enter 2 different primary colors (separated by a space):\n";
	cin >> color1 >> color2;

	//Determine the color mix
	if ((color1 == "red"  && color2 == "blue") || (color1 == "blue" && color2 == "red")) 
        {
		cout << "The mix of those two colors is purple.\n";
        } 
        else if ((color1 == "yellow"  && color2 == "blue") || (color1 == "blue" && color2 == "yellow")) 
        {
		cout << "The mix of those two colors is green.\n";
        } 
        else if ((color1 == "yellow"  && color2 == "red") || (color1 == "red" && color2 == "yellow")) 
        {
		cout << "The mix of those two colors is orange.\n";
        } 
        else
        {
		cout << "You didn't enter 2 different primary colors.";
        }
	return 0;
}