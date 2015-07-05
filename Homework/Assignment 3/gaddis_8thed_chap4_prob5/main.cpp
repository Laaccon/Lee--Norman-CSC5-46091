/*
 *File: main.cpp
 *Author: Norman Lee
 *Date 7/2/15
 *Purpose: Find the BMI and determine if the person is overweight, underweight, or optimal
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins

int main() {
	//Declare and Initialize Variables
	float BMI, weight, height;
	float under = 18.5f, over = 25; 
	
	//Prompt Input
	cout << "Enter your weight in pounds:";
	cin >> weight;
	cout << "Enter your height in inches:";
	cin >> height;
	
	
	//Calculate BMI
	BMI = weight * 703 / (height * height);
          
	//Output	
	if (BMI > over) 
        {
		cout << "You are overweight.\n";
        } 
        else if (BMI < under) 
        {
		cout << "You are underweight.\n";
        } 
        else 
        {
            cout << "You are at an optimal weight.\n";
        }
	return 0;
}