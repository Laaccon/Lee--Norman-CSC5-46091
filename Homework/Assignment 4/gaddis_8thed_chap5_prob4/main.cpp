/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/7/2015
 *Purpose: Display calories burned using a loop
*/

#include <iostream>
using namespace std;

int main() {
	// declare variables

	float calories = 3.6, burned;
	int mins;

	for (mins = 5; mins <= 30; mins += 5)
	{
		burned = mins * calories;
		cout << "At " << mins << " minutes, you burned " << burned << " calories.\n";
	}

	return 0;
}