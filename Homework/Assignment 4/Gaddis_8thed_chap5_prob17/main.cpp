/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 7/8/15
 *Purpose: Make a sales bar chart with a * representing every $100
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main() {
	//Declare Variables
	float sales1, sales2, sales3, sales4, sales5;
        short stars1, stars2, stars3, stars4, stars5;
        int row;

	//Prompt input of stores' sale
        cout << "Enter today's sales for store 1: ";
        cin >> sales1;
        cout << "Enter today's sales for store 2: ";
        cin >> sales2;
        cout << "Enter today's sales for store 3: ";
        cin >> sales3;
        cout << "Enter today's sales for store 4: ";
        cin >> sales4;
        cout << "Enter today's sales for store 5: ";
        cin >> sales5;
        
        // making stars for every $100
	stars1 = sales1 / 100;
        stars2 = sales2 / 100;
        stars3 = sales3 / 100;
        stars4 = sales4 / 100;
        stars5 = sales5 / 100;
       
        //Output
        cout << "SALES BAR CHART\n";
        cout << "Store 1:";
	for (int row = 1; row <= stars1; row++)
	{
            cout << "*";
	}
        cout << endl;
        cout << "Store 2:";
	for (int row = 1; row <= stars2; row++)
	{
            cout << "*";
	}
        cout << endl;
        cout << "Store 3:";
	for (int row = 1; row <= stars3; row++)
	{
            cout << "*";
	}
        cout << endl;
        cout << "Store 4:";
	for (int row = 1; row <= stars4; row++)
	{
            cout << "*";
	}
        cout << endl;
        cout << "Store 5:";
	for (int row = 1; row <= stars5; row++)
	{
            cout << "*";
	}
        cout << endl;
	return 0;
}