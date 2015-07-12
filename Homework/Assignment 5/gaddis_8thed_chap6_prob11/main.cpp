/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Calculate the average test score after dropping the lowest
*/


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int score1, score2, score3, score4, score5, lowest;
    
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    
    findLowest(score1, score2, score3, score4, score5);
    calcAverage(score1, score2, score3, score4, score5);
}

void getScore(int &score)
{
    cout << "Enter the test's score:";
    cin >> score;
    if (score < 0 || score > 100)
    {
        cout << "Invalid Input: Enter a score between 0 and 100.\n";
        getScore(score);
    }           
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest;
    if (score1 < score2 && score1 < score3 && score1 < score4 && score1 && score5)
        lowest = score1;
    else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 && score5)
        lowest = score2;
    else if (score3 < score2 && score3 < score1 && score3 < score4 && score3 && score5)
        lowest = score3;
    else if (score4 < score2 && score4 < score3 && score4 < score1 && score4 && score5)
        lowest = score4;
    else
        lowest = score5;
    return (lowest);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    float avrg;
    int lowest;
    lowest = findLowest(score1, score2, score3, score4, score5);
    avrg = (score1 + score2 + score3 + score4 + score5 - lowest) / 4;
    cout << "The average of the 4 highest scores is: " << avrg << endl;
}