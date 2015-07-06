/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/5/15
 *Purpose: make a menu that displays the speed of sound in different mediums and calculates the time it takes to travel a distance the user inputs
*/

//System Libraries

#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins
int main() {
	// Declare Variables and Constants
	const unsigned short SSAIR = 1100, SSWATR = 4900, SSSTL = 16400; //Speed of sound in air, water, steel
	float dstnce, time;
	unsigned short select;
	
	//Prompt a menu for input
	cout << "Select the medium to get its speed of sound:\n";
	cout << "1. Air \n";
	cout << "2. Water \n";
	cout << "3. Steel \n";
	cout << "Enter 1, 2, or 3:  ";
	cin >> select;

	cout << "Enter the distance the wave will travel:\n";
	cin >> dstnce;
	if (dstnce > 0)
	{
            cout << setprecision(4) << showpoint << fixed;
            switch (select)
            {
                case (1):
                    time = dstnce / SSAIR;
                    cout << "It takes " << time << " seconds to travel " << dstnce << " feet in air.\n";
                    break;
		case (2):
                    time = dstnce / SSWATR;
                    cout << "It takes " << time << " seconds to travel " << dstnce << " feet in water.\n";
                    break;
                case (3):
                    time = dstnce / SSSTL;
                    cout << "It takes " << time << " seconds to travel " << dstnce << " feet in steel.\n";
                    break;
                default: 
                    cout << "Error: Not a valid choice.\n";
		}
        }
        else
	{
            cout << "Error: Not a valid distance.\n";
	}
	return 0;
}