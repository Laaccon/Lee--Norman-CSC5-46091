/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 6/29/15
 *Purpose: Get 2 random numbers and pause till a key it hit, then provide the sum
*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution beings here

int main() {
	// Declare Variables
	unsigned seed = time(0); //Get system time
	srand(seed); //Seed random number generator

	int num1 = (rand() % 900) + 100; // random 100 to 999
	int num2 = (rand() % 900) + 100; 
	int sum;

	//Output: num1 and num2
	cout << "Press the Enter key to get the answer:\n";
	cout << right << setw(5) << num1 << endl;
	cout << right << "+" << setw(4) << num2 << endl;
	cout << right << "______\n";
	
	//Input: pause till enter
	cin.get();

	//Calculate
	sum = num1 + num2;
	
	//Output: sum
	 cout << right << setw(5) << sum << endl;
	return 0;
}