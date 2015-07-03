/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/1/15
 *Purpose: Find the area of 2 rectangles and compare them
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution begins here

int main() {
	// Declare variables
	float width1, width2, length1, length2, area1, area2;
	
	//Input and prompt
	cout << "Enter the width and length of the first rectangle:\n";
	cin >> width1 >> length1;
	cout << "Enter the width and length of the second rectangle:\n";
	cin >> width2 >> length2;

	//Calculate area
	area1 = width1 * length1;
	area2 = width2 * length2;

	//Compare the areas
	if (area1 > area2)
		cout << "the first rectangle is bigger\n";
	else if (area1 < area2) 
		cout <<  "the second rectangle is bigger\n";
	else
		cout << "Both the rectangles are equal\n";	
	
	return 0;
}