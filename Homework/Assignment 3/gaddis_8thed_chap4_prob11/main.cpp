/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/4/15
 *Purpose: Get 2 random numbers, have user input answer, check if correct
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution beings here

int main() {
	// Declare Variables
	unsigned seed = time(0); //Get system time
	srand(seed); //Seed random number generator

	short num1 = (rand() % 900) + 100; // random 100 to 999
	short num2 = (rand() % 900) + 100; 
	short sum, usrsum;

	//Output: num1 and num2
	cout << "Press the Enter key to get the answer:\n";
	cout << right << setw(5) << num1 << endl;
	cout << right << "+" << setw(4) << num2 << endl;
	cout << right << "______\n";
	
	//Input: pause till enter
	cin >> usrsum;

	//Calculate
	sum = num1 + num2;
        
        //Check Answer
        if (usrsum == sum)
        {
            cout << "You got the answer right!";
        }
        else
        {
            cout << "Sorry, you got the answer wrong. The answer was " << sum << endl;
        }
   
	return 0;
}