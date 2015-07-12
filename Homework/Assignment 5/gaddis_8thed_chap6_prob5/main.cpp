/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/11/15
 * Purpose:  Loop falling distance of an object using a function
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float fallingDistance(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initalize variables
    int time; 
    float dstnc;
    
    //Loop the function for 1 to 10 seconds
    for (time = 1; time <= 10; time++)
    {
        dstnc = fallingDistance(time);
        cout << "After " << time << " seconds, an object has fallen " << dstnc << " meters.\n";
    }
    
    return 0;
}

//Inputs time, calculates distance and output distance
float fallingDistance(int time)
{
    float dstnc, grav = 9.8;
    dstnc = grav * time * time / 2;
    return(dstnc);
}