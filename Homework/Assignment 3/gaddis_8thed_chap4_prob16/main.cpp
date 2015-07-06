/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/4/15
 * Purpose: To determine the results of a 3 person race
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare Variables
    float time1, time2, time3;
    string name1, name2, name3;
    
    //Prompt input
    cout << "Enter the name of the first runner:\n";
    cin >> name1;
    cout << "Enter the time that runner finished the race:\n";
    cin >> time1;
    cout << "Enter the name of the second runner:\n";
    cin >> name2;
    cout << "Enter the time that runner finished the race:\n";
    cin >> time2;
    cout << "Enter the name of the third runner:\n";
    cin >> name3;
    cout << "Enter the time that runner finished the race:\n";
    cin >> time3;
    
    //Determine who came first, second and third, also check for ties
    if (time1 > 0 || time2 > 0 || time3 > 0)
    {
        if ((time1 < time2) && (time1 < time3))
        {
            cout << name1 << " came in first, ";
            if (time2 < time3)
            {
                cout << name2 << " came in second, and " << name3 << " came in third.";
            }
            else if (time3 < time2)
            {
                cout << name3 << " came in second, and " << name2 << " came in third.";
            }
            else 
            {
                cout << name3 << " and " << name2 << " tied for second.";
            }
        }
        else if ((time2 < time1) && (time2 < time3))
        {
            cout << name2 << " came in first, ";
            if (time1 < time3)
            {
                cout << name1 << " came in second, and " << name3 << " came in third.";
            }
            else if (time3 < time1)
            {
                cout << name3 << " came in second, and " << name1 << " came in third.";
            }
            else 
            {
                cout << name3 << " and " << name2 << " tied for second.";
            }
        }
        else if ((time3 < time1) && (time3 < time2))
        {
            cout << name3 << " came in first, ";
            if (time2 < time1)
            {
                cout << name2 << " came in second, and " << name1 << " came in third.";
            }
            else if (time1 < time2)
            {
                cout << name1 << " came in second, and " << name2 << " came in third.";
            }
            else 
            {
                cout << name3 << " and " << name2 << " tied for second.";
            }
        }
        else if (time1 == time2 < time3)
        {
            cout << name1 << " and " << name2 << " tied for first and " << name3 << " got third.";
        }
        else if (time2 == time3 < time1)
        {
            cout << name2 << " and " << name3 << " tied for first and " << name1 << " got third.";
        }
        else if (time1 == time3 < time2)
        {
            cout << name1 << " and " << name3 << " tied for first and " << name2 << " got third.";
        }
        else
        {
            cout << "All the runner tied for first.";
        }
    }
    else
    {
        cout << "Error: You entered a non-positive number.\n";
    }
       
    return 0;
}

