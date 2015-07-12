/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/11/15
 * Purpose:  Find lowest occurrence of accidents of the 5 regions
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

int getNumAccidents(int);

void findLowest(int, int, int, int, int);

//Execution starts here
int main(int argc, char** argv) {
    //Declare Variables
    int north, east, west, south, central, region;
    
    //Prompt which region and calls function to get a value and assign it to the region.
    cout << "North region\n";
    north = getNumAccidents(region);
    cout << "South region\n";
    south = getNumAccidents(region);
    cout << "East region\n";
    east = getNumAccidents(region);
    cout << "West region\n";
    west = getNumAccidents(region);
    cout << "Central region\n";
    central = getNumAccidents(region);
    
    findLowest(north, south, east, west, central);
    return 0;
}

//Prompts input for accident numbers
//Outputs it to be assigned to a region
int getNumAccidents(int region)
{
    cout << "Enter the number of accidents:";
    cin >> region;
    //Attempt at using recursion
    if (region <= 0)
    {
        cout << "You entered a negative number. Try again. \n";
        getNumAccidents(region);
    }
    else
    {
        return(region);
    }
}

//Checks which region has the lowest amount of accidents
//Outputs the region and number of accidents
void findLowest(int north, int south, int east, int west, int central)
{
    cout << "______________________\n";
    if (north < south && north < west && north < east && north < central)
        cout << "North has the lowest number of accidents at " << north;
    if (south < north && south < west && south < east && south < central)
        cout << "South has the lowest number of accidents at " << south;
    if (east < north && east < west && east < south && east < central)
        cout << "East has the lowest number of accidents at " << east;
    if (west < north && west < east && west < south && west < central)
        cout << "West has the lowest number of accidents at " << west;
    if (central < north && central < west && central < south && central < east)
        cout << "Central has the lowest number of accidents at " << central;
}