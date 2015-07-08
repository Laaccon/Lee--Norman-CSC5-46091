/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/5/15
 *Purpose:  User inputs a temperature and the program will list the boiling and freezing points of several substances at the temperature.
*/

//System Libraries

#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main() {
	// Declare Variables
	float temp;
	
	//Prompt for input
	cout << "Enter a Temperature(in Fahrenheit):\n";
	cin >> temp;
	
//Freeze test
	cout << "Substances that Freeze at the temperature:\n";
	if (temp <= -173)
	{
		cout << "Ethyl alchohol\n";
	}
	if (temp <= -38)
	{
		cout << "Mercury\n";
	}
	if (temp <= -362)
	{
		cout << "Oxygen\n";
	}
	if (temp <= 32)
	{
		cout << "Water\n";
	}
		cout << endl << "Substances that boil at that temperature:\n";
	if (temp >= 172)
	{
		cout << "Ethyl alcohol\n";
	}
	if (temp >= 676)
	{
		cout << "Mercury\n";
	}
	if (temp >= -306)
	{
		cout << "Oxygen\n";
	}
	if (temp >= 212)
	{
		cout << "Water\n";
	}

	return 0;
}