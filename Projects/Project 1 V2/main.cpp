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
void header();
char grab();
char roll(char);
void clear();

//Execution begins here
int main(int argc, char** argv) {
    //Get seed off time and get "random" numbers
    int seed = time(0);
    srand(seed);
    //Declare and Initialize variables
    const int SIZE = 4;
    int score[SIZE] = {};//Array in case i have time to make a computer opponent
    unsigned short rndPts = 0, strike= 0; //points and strikes accrued this round
    char nDice = 1; //number of dice
    char result, color, play;
    bool again = true;
    header();
    do 
    {
        color = grab();
        clear();
        result = roll(color);
        if (result == 'L')
        {
            cout << ".-----------.\n"  
                 << "|   $$$$$   |\n" 
                 << "|    $ $    |\n"  
                 << "|  $     $  |\n"  
                 << "| $       $ |\n"  
                 << "|  $$$$$$$  |\n"  
                 << "'-----------'\n";
            cout << "You successfully stole some loot!\n";
            rndPts++;
        }
        else if (result == 'X')
        {
            cout << ".-----------.\n" 
                 << "| x       x |\n" 
                 << "|   x   x   |\n" 
                 << "|     x     |\n"  
                 << "|   x   x   |\n"  
                 << "| x       x |\n"  
                 << "'-----------'\n";
            cout << "You got caught and a strike was placed on your record.\n";
            strike++;
        }
        else
        {
            cout << ".-----------.\n"  
                 << "| RRRRR     |\n" 
                 << "| R   R     |\n"  
                 << "| R   RRRR  |\n"  
                 << "| R       R |\n"  
                 << "| RRRRRRRRR |\n"  
                 << "'-----------'\n";
            cout << "You failed at your attempt but got away.\n";
        }
        if (strike >= 3)
        {
            cout << "You have 3 strikes. Facing life in prison, you give up all your loot for a plea deal.\n";
            rndPts = 0;
            again = false;
        }
        else
        {
            cout << "You have " << rndPts << " points this round and " << strike  << " strikes. You have " << score[0] << " total points.\n";
            cout << "Do you want to roll again (y/n)?";
            cin >> play;
        }
        switch(play)
        {
            case('y'):
            {
                cout << "Time to roll again!\n";
                break;
            }
            case('n'):
            {
                again = false;
                //Add round points to total score and reinitialize
                score[0] += rndPts;
                rndPts = 0;
                cout << "Added point(s) to total.";
                break;
            }
            default: cout << "Something went wrong.";
        }
    }while (again == true);
    
    return 0;
}
// Purpose: Simulate grabbing a dice out of the bag and getting a random color
// Outputs: color -> g = green, r = red, y = yellow
char grab()
{
    char color;
    short val;
    val = rand()% 10 + 1;
    //determine color of dice grabbed
    if (val <= 5)
        {
            color = 'g';
        }
    else if (val >= 9)
        {
            color = 'r';
        }
    else
        {
            color = 'y';
        }
    return (color);
}

//Purpose: Roll a dice and get a weighted outcome based on the color
//Input: dice -> the color of dice 
//Output: rslt -> weighted results, green has the highest positive outcome, reds have the lowest
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
        else if (val == 6)
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
        if (val == 1)
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

void header()
{              
    cout << " . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ..-----------. . . . . .\n"
         << ". . . . . $ . .$. .$$$$ . $ .$$$$$. $$$$$$. . . 8888. 8 .888. .8888 . . . |   $$$$$   |. . . . . \n"
         << " . . . . .$. . $ . $ . . .$.$  . .$. .$. . . . .8. .8.8.8. .8. 8 . . . . .|    $ $    | . . . . .\n"
         << ". . . . . $$$$$$. .$$$. . $ .$$$$ . . $ . . . . 8 . 8 8 8 . . .888. . . . |  $     $  |. . . . . \n"
         << " . . . . .$. . $ . $ . . .$.$. . $$. .$. . . . .8. .8.8.8. .8. 8 . . . . .| $       $ | . . . . .\n"
         << ". . . . . $ . .$. .$$$$ . $ .$$$$$. . $ . . . . 8888. 8 .888. .8888 . . . |  $$$$$$$  |. . . . . \n"
         << " . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .'-----------' . . . . .\n";
    cout << "How to play Heist Dice: Every round you get to roll the dice.\n\n"
         << "There are 3 different outcomes you get from rolling: A loot bag, shoes, and a strike.\n"
         << "--------------------------------------------------------------------------------------------------\n"
         << "Loot bags: you score a point for the round.\n"
         << "Shoes: nothing good or bad happens.\n"
         << "Strikes: If you get 3 strikes, the round ends and you lose any points you made for that round.\n";
    cout << ".-----------.     .-----------.     .-----------.\n"  
         << "|   $$$$$   |     | RRRRR     |     | x       x |\n" 
         << "|    $ $    |     | R   R     |     |   x   x   |\n"  
         << "|  $     $  |     | R   RRRR  |     |     x     |\n"  
         << "| $       $ |     | R       R |     |   x   x   |\n"  
         << "|  $$$$$$$  |     | RRRRRRRRR |     | x       x |\n"  
         << "'-----------'     '-----------'     '-----------'\n\n"
         << "There are 3 types of die: Green, Red and Yellow.\n"
         << "--------------------------------------------------------------------------------------------------\n"
         << "Green: Has the highest amount of loot bags and only 1 strike.\n"
         << "Red: Has the highest amount of strikes and only 1 loot bag.\n"
         << "Yellow: All outcomes have an equal chance.\n"
         << "--------------------------------------------------------------------------------------------------\n"
         << "After every roll you can choose to stop and keep the points you have accrued.";
           
    cout << "<Press Enter to continue>\n";
    cin.ignore();
}
          
//Uses 50 new lines to clear the screen
void clear()
{
    for(int i = 1; i <=40; i++)
    {
    cout << endl;
    }
}

