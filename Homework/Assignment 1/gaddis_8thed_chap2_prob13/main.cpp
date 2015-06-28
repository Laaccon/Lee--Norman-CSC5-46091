/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/27/15
 *Purpose: Calculate the price of circuit boards
*/

// System Libraries
#include <iostream>
#include <iomanip>
using namespace std;


// User Libraries

// Global Constants

// Function Prototypes

// Execution begins here

int main() {
	// Define and Initialize Variables
	float prftpc = 0.35f; //profit percent per board
	float cbCost = 14.95f; //cost of circuit boards in dollars
	float sellprc; //selling price

	// Calculate
	sellprc = (1 + prftpc) * cbCost;

	// Output
	cout << setprecision(2) << fixed;
	cout << "The selling price for the circuit boards is $" << sellprc << " each.\n";
	return 0;
}