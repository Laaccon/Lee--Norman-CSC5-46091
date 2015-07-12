/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/11/15
 * Purpose:  Make a table that converts Fahrenhiet to celcius 1 - 20 degrees
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float celcius(float);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float degC;
    short degF;
    //Table Heading
    cout << "Fahrenheit     Celcius\n";
    cout << "-----------------------\n";
    //Generate table 1 through 20 
    for (degF = 0; degF <= 20; degF++)
    {
        degC = celcius(degF);
        cout << degF << "                " << degC << endl;                
    } 
    return 0;
}

//Input degrees Fahrenheit and Output degrees Celcius.
float celcius(float degF)
{
    float degC;
    degC = (5.0f / 9.0f) * degF - 32;
    return(degC);
}