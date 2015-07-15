/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/13/15
 *Purpose: Find the profit in a sale of a stock
*/

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void display();
float stckSal(float, float, float, float, float);

//Execution begins here
int main() {
	display();
	return 0;
}


void display()
{
	float NS, SP, SC, PP, PC, profit;
	cout << "Enter the number of shares: ";
	cin >> NS;
	cout << "Enter the sales price of the stock: ";
	cin >> SP;
	cout << "Enter the sales commission you paid: ";
	cin >> SC;
	cout << "Enter the purchase price: ";
	cin >> PP;
	cout << "Enter the purchase commission: ";
	cin >> PC;
	profit = stckSal(NS, SP, SC, PP, PC);
	if (profit > 0)
	{
		cout << "You made $" << profit << " in profit from this transaction.";
	}
	else if (profit < 0)
	{
		cout << "You lost $" << profit << " from this transaction.";
	}
	else
	{
		cout << "You broke even";
	}
}


float stckSal(float NS, float SP, float SC, float PP, float PC)
{
	float profit;
	profit = ((NS * SP) - SC) - ((NS * PP) + PC);
	return(profit);
}