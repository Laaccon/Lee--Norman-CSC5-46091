/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Calculate the average number of days employee's are absent
*/


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
int numEmp();
int missed(int);
float avgMssd(int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int emp, days, avg;
    
    emp = numEmp();
    days = missed(emp);
    avg = avgMssd(emp, days);
    //Output Results
    cout << "The average amount of days missed per employee was " << avg << " days.";
    return 0;
}
//Function for prompting number of employees
int numEmp()
{
    //Declare Variables
    int emp;
    cout << "Enter the number of employees: ";
    cin >> emp;
    //Validate input with a recursion
    if (emp < 0)
    {
        cout << "Invalid input: Can't have negative employees.\n";
        numEmp();     
    }
    return(emp);
}
//Function that takes the input of # of employees and prompts for days missed. Outputs total days missed.
int missed(int emp)
{
    //Declare and initialize variables
    int i, days, total = 0;
    for (i = 1; i <= emp; i ++)
    {
        cout << "Enter the number of days missed by employee " << i << " : ";
        cin >> days;
        //Validate input with a while loop
        while (days < 0)
        {
            cout << "Invalid input: Can't have negative days. Please enter Data again.\n";
            cin >> days;
        }
        total += days;
    }
    return(total);
}
//Function that takes the days missed and number of employees and outputs the average
float avgMssd(int emp, int days)
{
    //Declare Variables
    float avg;
    avg = days / emp;
    return(avg);
}