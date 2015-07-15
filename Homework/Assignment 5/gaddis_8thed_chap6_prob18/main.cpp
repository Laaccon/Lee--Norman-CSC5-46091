/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Calculate the average number of days employee's are absent
*/


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
    int rooms();
    float price(); //prompt for price
    float priceL(float);
    int walls(int);
    float paint(float);
    float labor(float);
    void display(float, float, float, float, float);
//Execution begins
int main(int argc, char** argv) {
    //Declare variables
    float totalW = 0, totalP, totalL, priceP, prcL, totalJ;
    int totalR, rmN;
    totalR = rooms();
    //Loop wall size for each number of rooms
    for (rmN = 1; rmN <= totalR; rmN++)
    {
        totalW +=  walls(rmN);
    }
    priceP = price();
    totalP = paint(totalW);
    totalL = labor(totalW);
    prcL = priceL(totalL);
    totalJ = priceP + prcL; 
    
    display(totalP, totalL, priceP, prcL, totalJ);
    
    return 0;
}
//Prompt input for number of rooms
int rooms()
{
    int rms;
    cout << "Enter the number of rooms you want painted: ";
    cin >> rms;
    //Input Validation using recursion
    if (rms <= 0)
    {
        cout << "Invalid Input: Number of rooms must be 1 or higher.\n";
        rooms();
    }
    else
    {
        return(rms);
    }
}
//Prompt input for price
float price()
{
    float prc;
    cout << "Enter the price of paint per gallon: ";
    cin >> prc;
    //Input validation using a while loop
    while (prc < 10.00)
    {
        cout <<"Invalid Input: Price of paint must be higher than $10.\n";
        cout << "Enter the price of paint per gallon: ";
        cin >> prc;
    }   
    return(prc);
}
//Prompt input for wall size
int walls(int rmN)
{
    int wall;
    cout << "Enter the size of the walls in room "<< rmN << " in square feet: ";
    cin >> wall;
    //Input validation using a while loop
    while (wall <= 0)
    {
        cout <<"Invalid Input: Size of walls must be grater than 0.\n";
        cout << "Enter the size of the walls in room "<< rmN << " in square feet: ";
        cin >> wall;
    }   
    return(wall);
}
//Calculate labor hours
float labor(float totalW)
{
    float totalL;
    totalL = 8 * totalW / 110;
    return(totalL);
}
//Calculate labor price
float priceL(float totalL)
{
    float labCost;
    labCost = totalL * 25;
    return(labCost);
}
//Calculate total paint needed
float paint(float totalW)
{
    float totalP;
    totalP = totalW/ 110;
    return(totalP);
}
//Display
void display(float paint, float totalL, float priceP, float prcL, float totalJ)
{
    cout << setprecision(2) << fixed << showpoint;
    cout << "Number of gallons required: " << paint << endl;
    cout << "Number of hours of labor: " << totalL << endl;
    cout << "Cost of paint: $" << priceP << endl;
    cout << "Labor charges: $" << prcL << endl;
    cout << "Total cost of the job: $" << totalJ;
}