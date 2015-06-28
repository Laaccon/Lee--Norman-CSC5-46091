/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/27/15
 *Purpose: Sum the cost of 5 items and calculate the subtotal, tax amount, and total.
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here
int main() {
	//Define and Initialize variables
	float item1 = 15.95f; //Price of item in dollars
	float item2 = 24.95f;
	float item3 = 6.95f;
	float item4 = 12.95f;
	float item5 = 3.95f;
	float itemsum;		//sub total of items
	float taxrate = 0.07; //sales tax at 7%
	float taxamnt;	//Amount of tax in dollars
	float total; 	
	
	//Calculate subtotal, tax amount and total
	itemsum = item1 + item2 + item3 + item4 + item5;
	taxamnt = itemsum * taxrate;
	total = itemsum + taxamnt;

	//Output
	cout << setprecision(2) << fixed;
	cout << "The prices of each item:  \nItem 1 = $" << item1 << "\nItem 2 = $"<< item2 << "\nItem 3 = $" << item3 << "\nItem 4 = $" << item4 << "\nItem 5 = $" << item5 <<endl;
	cout << "The subtotal of all items is $" << itemsum << endl;
	cout << "The tax amount is $" << taxamnt << endl;
	cout << "The total is $" << total << endl;
	return 0;
}