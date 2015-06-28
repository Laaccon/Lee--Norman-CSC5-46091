/*
 *File:  main.cpp
 *Author: Norman Lee
 *Date 6/27/15
 *Purpose: Determine stock price before commission, commission amount, and total amount paid
*/


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!


int main() {
	//Define and Initialize Variables
	float shares = 750;
	float price = 35;
	float cmsion = 0.02f;
	float shrAmt;
	float cmsnAmt;
	float total;

	//Calculate cost of shares, commission amount and total
	shrAmt = shares * price;
	cmsnAmt = shrAmt * cmsion;
	total = shrAmt + cmsnAmt;

	//Output results
	cout << setprecision(2) << fixed;
	cout << "The amount paid before commission is $"<< shrAmt <<".\n";
	cout <<"The amount paid for commission is $" << cmsnAmt <<".\n";
	cout << "The total amount paid is $" << total <<".\n";
	return 0;
}