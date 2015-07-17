/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Created on July 17, 2015, 3:09 AM
 * Purpose: Heist Dice - a game based off Zombie Dice.
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
char grab();
char roll(char);

//Execution begins here
int main(int argc, char** argv) {
    //Get seed off time and get "random" numbers
    int seed = time(0);
    srand(seed);
    char nDice = 1; //number of dice
    char type;
    type = grab();
    if (type == 'g')
            cout << "you got a " << roll(type);
    else if (type == 'r')
        cout
    return 0;
}
// Purpose: Simulate grabbing a dice out of the bag and getting a random color
// Outputs: color -> g = green, r = red, y = yellow
char grab()
{
    char color, val;
    val = rand()% 3 + 1;
    //determine color of dice grabbed
    switch(val)
    {
        case(1):
        {
            color = 'g';
            break;
        }
        case(2):
        {
            color = 'r';
            break;
        }
        case(3):
        {
            color = 'y';
            break;
        }
    }
    return (color);
}

//Purpose: Roll a dice and get a weighted outcome based on the color
//Input: dice -> the type of dice 
char roll(char dice)
{
    char val, rslt;
    val = rand()%6 + 1;
    if (dice == 'r') //Red dice, weighted with 50% chance of a strike
    {
        if (val <= 3)
        {
            rslt = 'X'; //you got caught/a strike
        }
        else if (val = 6)
        {
            rslt = 'L'; //you got loot/a point
        }
        else
        {
            rslt = 'F'; //you failed to get loot but got away
        }
    }
    else if (dice == 'g') //Green dice, weighted with a 50% chance to get you Loot
    {
        if (val = 1)
        {
            rslt = 'X'; //you got caught/a strike
        }
        else if (val >= 4)
        {
            rslt = 'L'; //you got loot/a point
        }
        else
        {
            rslt = 'F'; //you failed to get loot but got away
        }
    }
    else if (dice == 'y') //Yellow dice, weighted with even odds for all outcomes
    {
        if (val <= 2)
        {
            rslt = 'X'; //you got caught/a strike
        }
        else if (val >= 5)
        {
            rslt = 'L'; //you got loot/a point
        }
        else
        {
            rslt = 'F'; //you failed to get loot but got away
        }
    }
    return (rslt);
            
}