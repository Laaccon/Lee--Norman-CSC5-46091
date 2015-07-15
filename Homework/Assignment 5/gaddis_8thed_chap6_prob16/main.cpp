/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/12/15
 *Purpose: Calculate the size of a population over a number of years
*/


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
int pop(int, float, float);

int main(int argc, char** argv) {
    //Declare Variables
    int start, years, end, i;
    float bRate, dRate; //Birth rate death rate
    
    cout << "Enter the starting population size: ";
    cin >> start;
    while (start < 2)
    {
        cout << "Invalid Input: please enter a number higher than 2.\n";
        cout << "Enter the starting population size: ";
        cin >> start;
    }
    cout << "Enter the annual birth rate: ";
    cin >> bRate;
    while (bRate < 0)
    {
        cout << "Invalid Input: please enter a positive number.\n";
        cout << "Enter the annual birth rate: ";
        cin >> bRate;
    }   
    cout << "Enter the annual death rate: ";
    cin >> dRate;
    while (dRate < 0)
    {
        cout << "Invalid Input: please enter a positive number.\n";
        cout << "Enter the annual death rate: ";
        cin >> dRate;
    }   
    cout << "Enter the number of years: ";
    cin >> years;
    while (years < 1)
    {
        cout << "Invalid Input: please enter a number higher than 1.\n";
        cout << "Enter the number of years: ";
        cin >> years;
    }

    for (i = 1; i <= years ; i++)
    {
        end =  pop(start, bRate, dRate);
        cout << "The population for year " << i << " is "<< end << " people.\n";
        start = end;
    }
    return 0;
}

int pop(int start, float bRate, float dRate)
{
    int newpop;
    newpop = start + bRate - dRate;
    return(newpop);
}