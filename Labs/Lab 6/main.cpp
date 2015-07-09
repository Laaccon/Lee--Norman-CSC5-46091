/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Created on July 8, 2015, 10:45 AM
 * Purpose:  Retirement Calculator
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void header(float, float, float, float);
void retire(float, float, float, float &, float &);
void table(float, float, float , float, int &, float &, float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep=0.20f;   //Of your gross Salary -> Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0
    float intrst;     //End of Year interest
    int date = 2018;    //The year it starts is 2018

    
    //Calculate required savings to retire
    retire(salary, invRate, pDep, savReq, deposit);         
    
    //Display Header
    header(salary, invRate, pDep, savReq);
    
    //Display Table
    table(savReq, invRate, deposit, intrst, date, year, savings);
               
    //Exit Stage Right!
    return 0;
}


/*****************************************Retire*********************************************** 
 * Purpose: To calculate the savings required to retire and the yearly deposit based on salary
 * Input:
 * salary = Average Salary in $'s
 * invRate = Investment rate
 * pDep = Of your gross Salary -> Percentage Deposited 
 * 
 * Output: 
 * savReq = Required Savings
 * deposit = Deposit based on salary 
 **********************************************************************************************/

void retire(float salary, float invRate, float pDep, float &savReq, float &deposit)
{
    savReq=salary/invRate; //Required Savings
    deposit=pDep*salary;   //Deposit based salary
}

/**************************************Header**************************************************
 * Purpose: To display a Header with relevant information
 * Input:
 * salary = Average Salary in $'s
 * invRate = Investment rate
 * pDep = Of your gross Salary -> Percentage Deposited 
 * savReq = Required Savings
 **********************************************************************************************/

void header(float salary, float invRate, float pDep, float savReq)
{
    cout << setprecision(2) << fixed;
    cout << setw(40) << "Retirement Calculator\n\n";
    cout << setw(17) << "$"<<salary<<" = Salary $'s\n";
    cout << setw(25)<<invRate<<"% = Investment Rate -> See Muni Bonds\n";
    cout << setw(25)<<pDep<<"% = Deposit as a % of Salary\n";
    cout << setw(16)<<"$"<<savReq<<" = Amount needed to Retire $'s\n\n";
    cout << "Year      Date     Beginning Yr      End Yr      End of Yr\n";
    cout << "                     Savings       Interest       Deposit\n";
    
}

/***************************************Table**************************************************
 * Purpose: To calculate when retirement is possible and output a table with yearly stats
 * Input:
 * savReq = Required Savings
 * invRate = Investment rate
 * deposit = Yearly deposit in $'s
 * intrst = End of Year interest
 *
 * Output:
 * savings = Amount of savings accrued
 * date = The year it starts is 2018 and increments by 1
 * year = Start at year 0 and increments by 1
 ***********************************************************************************************/

void table(float savReq,float invRate, float deposit, float intrst, int &date, float &year, float &savings)
{
    //Loop and calculate when retirement is possible
    do{
        cout << setw(2) << setprecision(0);
        cout << year << "    " << "06/01/"<< date << setw(12) << savings;
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
        date++;
        cout << setw(14) << intrst << setw(14) << deposit << endl;
        intrst=savings*invRate;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    // Displaying the year after the loop ends when you have enough money
        cout << setw(2) << right << setprecision(0);
        cout << year << "    " << "06/01/"<< date << setw(12) << savings
        << setw(14) << intrst << setw(14) << deposit << endl;
}