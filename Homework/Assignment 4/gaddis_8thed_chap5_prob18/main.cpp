/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/10/15
 *Purpose: Making a Population Bar chart
*/

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here


int main() {
	//Declare Variables
        int year, pop, stars,i;
        
	ifstream inputFile;
	//Open File.
	inputFile.open("people.txt");
	
        //Error check 
        if (inputFile)
        {
            cout << "PRAIRIEVILLE POPULATION GROWTH\n";
            for (year = 1900; year <= 2000; year += 20)
            {
                inputFile >> pop;
                stars = pop/1000;
                
                cout << year << "  ";
                //Converting population into *
                for (i = 1; i <= stars; i++)
                {
                    cout << "*";
                }
                cout << endl;            }
        }
        else
        {
            cout << "Error opening the file.\n";
        }
       
	return 0;
}