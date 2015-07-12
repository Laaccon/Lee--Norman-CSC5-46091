/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/11/15
 * Purpose:  Falling Distance
 */

//System Library
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void cointoss();

//Execution Begins Here
int main(int argc, char** argv) {
  
    //Declare Variables
    int toss, times;
    unsigned seed = time(0);
    srand(seed);
    //Prompt Input number of tosses
    cout << "Enter the number of times you want to toss a coin: ";
    cin >> times;
    //Loop the amount of times the coin is tossed
    for (toss = 1; toss <= times; toss++)
    {
        cointoss();
    }
    
    return 0;
}

//Random 1 to 2 and outputs head or tails based on the number
void cointoss()
{
    unsigned int toss = (rand() % 2) + 1;
    if (toss == 1)
    {
        cout << "heads\n";
    }
    else
    {
        cout << "tails\n";
    }
}
