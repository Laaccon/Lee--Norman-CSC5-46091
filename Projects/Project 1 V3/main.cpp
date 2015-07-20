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
void play(bool &, unsigned short &, unsigned short &, int [], short &, string);
void oplay(bool &, unsigned short &, unsigned short &, int [], short &, string);
void result(unsigned short &, unsigned short &);

//Execution begins here
int main(int argc, char** argv) {
    //Get seed off time and get "random" numbers
    int seed = time(0);
    srand(seed);
    //Declare and Initialize variables
    const int SIZE = 2;
    int score[SIZE] = {};//Array to keep track of both you and your opponents score
    unsigned short rndPts = 0, strike = 0; //points and strikes accrued this round
    string pTeam, oTeam; //Team Names
    bool pTurn; //marker for who's turn it is
    short round = 0; //The round number.  Not the Indiana Jones character.
    int tRnd = 5; // Total rounds to be played
    bool again = true;
    //Output Start Page
    header();
    //Get names of the teams
    cout << "Enter the name of your team:";
    cin >> pTeam;
    cout << "Enter the name of your opponents:";
    cin >> oTeam;
    //Start the game and loop for the number of rounds 
    for (int i = 1; i < tRnd; i++)
    {
        //Initialize/Reset conditions for the start of the round
        again = true;
        //Start your turn
        pTurn = true;
        play(again, rndPts, strike, score, round, pTeam);
        //Start opponent's turn
        pTurn = false;
        oplay(again, rndPts, strike, score, round, oTeam);
        //End of round phase
        clear();
        cout << "Round " << round << " is over. \n" << pTeam << " has " << score[0] << " points.\n" << oTeam << " has " << score[1] << " points.\n"; 
        cout << "Press enter to continue";
        cin.ignore();
    }
    //Determine who won
    if (score[0] > score[1])
    {
        cout << pTeam << " Wins!";
    }
    else if (score [1] > score [0])
    {
        cout << oTeam << " Wins...";
    }
    else
    {
        cout << "It's a draw.";
    }
    return 0;
}
// Purpose: Simulate grabbing a dice out of the bag and getting a random color
// Outputs: color -> g = green, r = red, y = yellow
char grab()
{
    char color, play;
    short val;
    val = rand()% 10 + 1;
    //determine color of dice grabbed
    if (val <= 5)
        {
            color = 'g';
            cout << "A Green Dice has been pulled out of the bag.\n";
        }
    else if (val >= 9)
        {
            color = 'r';
            cout << "A Red Dice has been pulled out of the bag.\n";
        }
    else
        {
            color = 'y';
            cout << "A Yellow Dice has been pulled out of the bag.\n";
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

//Purpose: Add points or strike and output ascii picture
void result(unsigned short &rndPts, unsigned short &strike)
{
    char rslt, color; // copied values for color and the value you get from rolling
    color = grab(); //grab a dice from the bag and find out which color you got
    rslt = roll(color); //roll the dice and get the value
    //Output ascii representation of the dice and increment strikes or points based on roll result  
    if (rslt == 'L')
    {
        cout << ".-----------.\n"  
             << "|   $$$$$   |\n" 
             << "|    $ $    |\n"  
             << "|  $     $  |\n"  
             << "| $       $ |\n"  
             << "|  $$$$$$$  |\n"  
             << "'-----------'\n";
        cout << "Successfully stole some loot!\n";
        rndPts++;
    }
    else if (rslt == 'X')
    {
        cout << ".-----------.\n" 
             << "| x       x |\n" 
             << "|   x   x   |\n" 
             << "|     x     |\n"  
             << "|   x   x   |\n"  
             << "| x       x |\n"  
             << "'-----------'\n";
        cout << "Got caught and a strike was placed on your record.\n";
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
        cout << "Failed at the attempt but got away.\n";
    }
}

//Purpose: Generate a header with information
void header()
{              
    cout << " . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ..-----------. . . . . .\n"
         << ". . . . . $ . .$. .$$$$ . $ .$$$$$. $$$$$$. . . 8888. 8 .888. .8888 . . . |   $$$$$   |. . . . . \n"
         << " . . . . .$. . $ . $ . . .$.$  . .$. .$. . . . .8. .8.8.8. .8. 8 . . . . .|    $ $    | . . . . .\n"
         << ". . . . . $$$$$$. .$$$. . $ .$$$$ . . $ . . . . 8 . 8 8 8 . . .888. . . . |  $     $  |. . . . . \n"
         << " . . . . .$. . $ . $ . . .$.$. . $$. .$. . . . .8. .8.8.8. .8. 8 . . . . .| $       $ | . . . . .\n"
         << ". . . . . $ . .$. .$$$$ . $ .$$$$$. . $ . . . . 8888. 8 .888. .8888 . . . |  $$$$$$$  |. . . . . \n"
         << " . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .'-----------' . . . . .\n"
         << "How to play Heist Dice: Every round you get to roll the dice.\n\n"
         << "There are 3 different outcomes you get from rolling: A loot bag, shoes, and a strike.\n"
         << "--------------------------------------------------------------------------------------------------\n"
         << "Loot bags: you score a point for the round.\n"
         << "Shoes: nothing good or bad happens.\n"
         << "Strikes: If you get 3 strikes, the round ends and you lose any points you made for that round.\n"
         << ".-----------.     .-----------.     .-----------.\n"  
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
         << "After you grab a dice from the bag you can choose to stop and keep the points you have accrued.\n"
         << "There are 5 rounds, you and your opponent take turns rolling for each round.";
           
    cout << "<Press Enter to continue>\n";
    cin.ignore();
}
          
//Uses 40 new lines to clear the screen
void clear()
{
    for(int i = 1; i <=40; i++)
    {
    cout << endl;
    }
}

//Purpose play dice 
void play(bool &again, unsigned short &rndPts, unsigned short &strike, int score[], short &round, string pTeam)
{
    round = i; //Add one to start the round
    char playing;
    while(again == true)
    {
        clear();
        cout << "Round " << round << "<Your turn>" << endl;
        if (again == true)
        {
            result(rndPts, strike);
        }
        /*switch(playing)
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
                strike = 0;
                cout << "Added point(s) to total. ";
                break;
            }
            default: cout << "Something went wrong.";
        }*/
        if (strike >= 3)
        {
            cout << pTeam << " member <" << round <<"> has 3 strikes. Facing life in prison, you give up all your loot for a plea deal.\n";
            rndPts = 0;
            again = false;
            strike = 0;
        }
        else
        {
            cout << pTeam << " member <" << round << "> has " << rndPts << " points this round and " << strike  << " strikes. " << pTeam << " has " << score[0] << " total points.\n";
            cout << "Do you want to roll again (y/n)?";
            cin >> playing;
        }
    }
}
void oplay(bool &again, unsigned short &rndPts, unsigned short &strike, int score[], short &round, string &oTeam)
{
    again = true;
    char playing;
    while (again == true)
    {
        clear();
        cout << "Round " << round << " <Opponent's turn>" << endl;
        result(rndPts, strike);
        cout << oTeam << " member " << round <<" has "<< rndPts << " points and " << strike << " strikes.\n" << endl;
        cout << "<Press enter to continue>";
        cin.ignore();
        if (strike >= 2)
        {
            //Add round points to total score and reinitialize
            score[1] += rndPts;
            rndPts = 0;
            strike = 0;
            cout << "Added point(s) to total. " << score[1] << " total points for "<< oTeam <<" .\n";
            again = false;
        }

    }
}
