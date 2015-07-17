/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/16/15
 *Purpose: Make parallel arrays with one giving the squared value of the other
 *and make a 12 by 12 multiplication table
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    
    //Declare and initialize Variables for parallel arrays
    const int SIZE = 10 ;
    int P1[SIZE] = {}, P2[SIZE] = {};
    cout << "Squares:\n";
    
    //Loop to fill the first array with incremented numbers and the second array 
    //with the respective square
    for (int i = 1; i <= SIZE; i++)
    {
        P1[i] = i;
        P2[i] = i * i;
        cout << setw(5) << P1[i] << setw(5) << P2[i] << endl;
    }

    //Declare and initialize variables for multiplication table
    const int ROW = 12, COL = 12;
    int tmsTbl[ROW][COL];
    cout << "\nMultiplication Table:\n";
    
    //Loop to fill out 2d array
    for (int rows = 0; rows < ROW; rows++)
    {
        for(int cols = 0; cols < COL; cols++)
        {
            //Add 1 to each dimension since index starts at 0 and multiply row by column
            tmsTbl[rows][cols] = (rows + 1) * (cols + 1);
            cout << setw(5) << tmsTbl[rows][cols];
        }
        cout << endl;
    }
    return 0;
}

