/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/7/15
 *Purpose: Determine the number of book club points someone received based on input
*/

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins

int main() {
	// Declare Variables
	int books, points;
	
	//Prompt input for number of books purchased this month
	cout << "Enter the number of books you purchased this month from Serendipity Booksellers:\n";
	cin >> books;
	
	//Amount of points per number of books
	if (books >= 0)
	{
		if (books == 0)
		{
			points = 0;
		}
		else if (books == 1)
		{
			points =5;
		}
		else if (books == 2)
		{
			points = 15;
		}
		else if (books == 3)
		{
			points = 30;
		}
		else
		{
			points = 60;
		}
		cout << "You earned " << points << " points.\n" ;
	}
	else
	{
		cout << "Error: negative number\n";
	}
	return 0;
}