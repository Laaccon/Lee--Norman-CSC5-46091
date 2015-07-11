/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 7/8/15
 *Purpose: user enters a set of integers and this program finds the largest and smallest till user enters -99
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main() {
	//Declare Variables
	int num, large, small;
        
        // Initialize the large and small variables to the first number entered
        cout << "Enter a number(entering -99 ends the list):\n";
        cin >> num;
        large = num;
        small = num;
        
        //Loop a check if numbers entered are bigger/smaller than the previous biggest/smallest
	while (num != -99)
        {
		cout << "Enter a number(entering -99 ends the list):\n";

		if (num > large)
                {
                    large = num;
                }
		if (num < small)
                {
                    small = num;
                }
                cin >> num;
              
	}
        if (large != -99 && small != -99)
        {
            cout << "The largest number was "<< large << " and the smallest was "<< small << ".\n";
        }
        else
        {
            cout << "You quit.";
        }
	return 0;
}