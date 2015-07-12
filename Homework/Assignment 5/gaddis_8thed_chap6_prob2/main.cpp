/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/11/15
 *Purpose: Find the area of a rectangle using functions
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Variables

//Function Prototypes
void getLength(float &);
void getWidth(float &);
void getArea(float, float, float &);
void displayData(float, float, float);

//Execution Begins Here

int main() {
    //Declare Variables
    float width, length, area;
    getWidth(width);
    getLength(length);
    getArea(width, length, area);
    displayData(width, length, area);
    return 0;
}
//Function gets length
void getLength(float &length)
{
    cout << "Enter the length: ";
    cin >> length;
}
void getWidth(float &width)
{
    cout << "Enter the width: ";
    cin >> width;
}

void getArea(float width, float length, float &area)
{
    area = width * length;
}

void displayData(float width, float length, float area)
{
    cout << "Length of the rectangle: " << length << endl;
    cout << "Width of the rectangle: " << width << endl;
    cout << "Area of the rectangle: "  << area << endl;
}