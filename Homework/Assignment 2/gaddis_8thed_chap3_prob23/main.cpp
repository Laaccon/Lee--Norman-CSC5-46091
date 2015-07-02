/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/1/15
 *Purpose: Display information based on stock purchases
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

int main() {
	//Declare and initalize variables
	int numshrs = 0;
	float price = 0, commisn, paid, buycom, sellcom, rcvd, profit;
	
	//Calculate Joe buying stock
	numshrs += 1000;
	price += 45.50;
	commisn = 0.02; //commission is 2%
	paid = numshrs * price;
	buycom = paid * commisn; 

	//Joe sells the stock
	price = 56.90;
	rcvd = price * numshrs;
	sellcom = rcvd * commisn; //commission is still 2%
	numshrs -= 1000;
	
	profit = rcvd - paid -sellcom - buycom;
	
	//Output
	cout << setprecision(2) << fixed;
	cout << left << setw(45) << "Amount of money Joe paid for the stock:"  << right << setw(10)<< "$" << setw(10) << paid << endl;
	cout << left << setw(45) << "Amount of commission for buying:"  << right << setw(10) << "$" << setw(10) << buycom << endl;
	cout << left << setw(45) << "Amount of money Joe received for selling:" << right  << setw(10) << "$" << setw(10) << rcvd << endl;
	cout << left << setw(45) << "Amount of commission for selling:" << right << setw(10) << "$" << setw(10) << sellcom << endl;
	cout << left << setw(45) << "The total profit from transactions:" << right << setw(10) << "$" << setw(10) << profit << endl;
	
	return 0;
}