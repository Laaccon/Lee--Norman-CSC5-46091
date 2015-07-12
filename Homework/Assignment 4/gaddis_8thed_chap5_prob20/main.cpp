/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Random Number Guesser
*/


//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution Begins Here

int main() {
    //Get system time and seed a random number
    unsigned seed = time(0);
    srand(seed);

    // Declare Variables
    unsigned int num = (rand() % 20) + 1;
    unsigned int guess;

    do
    {    
        cout << "I'm thinking of a number between 1 and 20, what is it?\n";
        cin >> guess;
        if (guess > num)
        {
            cout << "The number you guessed is too high.\n";
        }
        else if (guess < num)
        {	
            cout << "The number you guessed is too low.\n";
        }
        else
        {
            cout << "You got it right!\n";
        }
	}
	while(guess != num);
	
	
	
	return 0;
}