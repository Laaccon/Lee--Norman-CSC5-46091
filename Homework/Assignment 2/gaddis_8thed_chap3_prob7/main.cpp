/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 6/28/15
 *Purpose:  Display information of a theaters run of a movie
*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
	//Declare Variables
	string movName;
	float adTkt, chdTkt, gross, net, dstrbtr; //adult and child tickets, gross and net profit, payment to distributor
	float adprc = 10; //Price of tickets in dollars
	float chdprc = 6;
	float cut = 0.2;	// Percent that the theater keeps from gross box office profit

	//Input
	cout << "Enter the name of the movie:";
	getline(cin, movName);
	cout << "Enter the amount of adult tickets sold:";
	cin >> adTkt;
	cout << "Enter the amount of child tickets sold:";
	cin >> chdTkt;

	//Calculations
	gross = (adprc * adTkt) + (chdprc * chdTkt);
	net =  gross * cut;
	dstrbtr = gross - net;
	
	//Output with left justification for 1 column and right the other column, and spacing for each 
	cout << left << setw(30) << "Movie Name:" << right << setw(15) << '"' << movName << '"' << endl;
	cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(22) << adTkt << endl;
	cout << left << setw(30) << "Child Tickets Sold:" << right << setw(22) << chdTkt << endl;
	cout << setprecision(2) << fixed;
	cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(15) << "$" << setw(10) << gross << endl;
	cout << left << setw(30) << "Net Box Office Profit:" << right << setw(15) << "$" << setw(10) << net << endl;
	cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(15) << "$" << setw(10)<< dstrbtr << endl;
	
	return 0;
}