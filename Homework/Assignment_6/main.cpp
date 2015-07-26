/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/22/15
 * Purpose:  Assignment 6, Arrays
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
const int ROWSIZE = 3; //For a 2d array
const int COLSIZE = 3;
const int TSTSIZE = 4;
const int STDSIZE = 5;

//Function Prototypes
void Menu();
int getN();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
int fLrgN(int [], int, int);
int test(int[][COLSIZE], int, bool &);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
            default:;
        };
    }while(inN<8);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}


//Gaddis 8th edition chapter 7 problem 2
void problem1()
{
    //Declare and Initialize Variables
    const int SIZE = 12;
    float rain[SIZE];
    float sum = 0, avg = 0;
    //Prompt input for array
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the amount of rainfall for month " << i + 1 << "(in inches): ";
        cin >> rain[i];
        while(rain[i] < 0)
        {
            cout << "<Invalid Input> Enter a non negative number:\n";
            cin >> rain[i];
        }
    }
    //Sum array
    for (int i = 0; i < SIZE; i++)
    {
        sum += rain[i];
    }
    cout << "Total rainfall:  " << sum << " inches.\n";
    //get average
    avg = sum / SIZE;
    cout << "Average rainfall per month:  " << avg << endl;
}

//Gaddis 8th edition chapter 7 problem 4
void problem2()
{
    //Declare and Initialize Variables
    const int SIZE = 5;
    int array[SIZE];
    int n;
    //prompt to get number
    cout << "Enter the number you want checked: ";
    cin >> n;
    //prompt for array numbers
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter a number for the array: ";
        cin >> array[i];
    }
    fLrgN(array, SIZE, n);
}

//Gaddis 8thed chapter 7 problem 5
void problem3()
{
    //Declare and Initialize Variables
    const int MNKSIZE = 3;
    const int DYSIZE = 5;
    int monkey[DYSIZE][MNKSIZE];
    float total = 0, lowest = 0, highest = 0, avg = 0;
    for(int i = 0; i < DYSIZE; i++)
    {
        for(int s = 0; s < MNKSIZE; s++)
        {
            cout << "Monkey " << s+1 << ", Day " << i+1 << endl; 
            cout << "Enter how much Monkey " << s+1 << " ate today: ";
            cin >> monkey[i][s];
            while (monkey[i][s] < 0)
            {
                cout << "Invalid Input: Enter a non negative number:";
                cin >> monkey[i][s];
            }
        }
    }
    
    highest = monkey[0][0];
    for(int i = 0; i < DYSIZE; i++)
    {
        for(int s = 0; s < MNKSIZE; s++)
        {
            if (monkey[i][s] > highest)
                highest = monkey[i][s];
        }
    }
    
    lowest = monkey[0][0];
    for(int i = 0; i < DYSIZE; i++)
    {
        for(int s = 0; s < MNKSIZE; s++)
        {
            if (monkey[i][s] < lowest)
                lowest = monkey[i][s];
        }
    }
    
    for(int i = 0; i < DYSIZE; i++)
    {
        for(int s = 0; s < MNKSIZE; s++)
        {
            total += monkey[i][s];
        }
    }
    avg = total / (MNKSIZE * DYSIZE);
    cout << "The average amount of food a monkey eats a day is " << avg << endl;
    cout << "The most amount of food a monkey ate in a day was " << highest << endl;
    cout << "The least amount of food a monkey ate in a day was " << lowest << endl;
}

//Gaddis 8thed chapter 7 problem 6
void problem4()
{
    const int MNTSIZE = 3, DAYSIZE = 30, WTHRSIZE = 3;
    char wthr[MNTSIZE][DAYSIZE] = {};//2d array for the file data
    char rprt[MNTSIZE][WTHRSIZE] = {};//report of totals for each month
    ifstream infile;
    infile.open("RainOrShine.txt");
    
    //Read Data from files
    for(int mnth = 0; mnth < MNTSIZE; mnth++)
    {
        for(int day = 0; day < DAYSIZE; day++)
        {
            infile >> wthr[mnth][day];
        }
        infile.ignore();
        cout << endl;
    }
    
    //Count how many rainy, sunny, cloudy days per month
    for(int mnth = 0; mnth < MNTSIZE; mnth++)
    {
        for(int day = 0; day < DAYSIZE; day++)
        {
            if(wthr[mnth][day] == 'R')
            {
                rprt[mnth][0]++;
            }
            if(wthr[mnth][day] == 'S')
            {
                rprt[mnth][1]++;
            }
            if(wthr[mnth][day] == 'C')
            {
                rprt[mnth][2]++;
            }
        }
    }
    //Output a report table 
    for(int mnth = 0; mnth < MNTSIZE; mnth++)
    {
        for(int wth = 0; wth < WTHRSIZE; wth++)
        {
            cout << rprt[mnth][wth] << "  ";
        }
        cout << endl;
    }
    //Check which month had the most rainy days
    if(rprt[0][0] > rprt[1][0] && rprt[0][0] > rprt[2][0])
        cout << "June has the highest amount of rain";
    if(rprt[1][0] > rprt[0][0] && rprt[1][0] > rprt[2][0])
        cout << "July has the highest amount of rain";
    if(rprt[2][0] > rprt[1][0] && rprt[2][0] > rprt[0][0])
        cout << "June has the highest amount of rain";
    
    infile.close();
}

//Gaddis 8th edition chapter 7 problem 8
void problem5()
{
    bool loshu = true;
    int square[ROWSIZE][COLSIZE];
    for(int r = 0; r < ROWSIZE; r++)
    {
        for(int c = 0; c < COLSIZE; c++)
        {
            cout << "Enter a number for square (" << c + 1 << ", " << r + 1 << "): " << endl;
            cin >> square[r][c];
        }
    } 
    test(square, ROWSIZE, loshu);
    if (loshu == true)
        cout << "This is a loshu square!";
    else
        cout << "This is not a loshu square!";
}

//Gaddis 8thed chapter 7 problem 9
void problem6()
{
    //Declare and initialize variables
    const int SIZE = 7;
    int empID[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE] = {};
    float payRate[SIZE] = {};
    float wages[SIZE] = {};
    
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter Employee #" << empID[i] << "'s hours worked: ";
        cin >> hours[i];
        while (hours[i] < 0)
        {
            cout << "Invalid Input: Enter a non negative number:";
            cin >> hours[i];
        }
        cout << "Enter Employee #" << empID[i] << "'s pay rate: ";
        cin >> payRate[i];
        while (payRate[i] < 15.00)
        {
            cout << "Invalid Input: Enter a pay rate higher than 15:";
            cin >> payRate[i];
        }
        wages[i] = hours[i] * payRate[i];
    }
   for(int i = 0; i < SIZE; i++)
   {
       cout << empID[i] << "    $" << wages[i] << endl;
   }
}

//Gaddis 8th edition chapter 7 problem 12
void problem7()
{
    string stdnt[STDSIZE] = {};
    int tests[TSTSIZE][STDSIZE] = {};
    float avg[STDSIZE] = {};
    
    for(int i = 0; i < STDSIZE; i++)
    {
        cout << "Enter the students name: ";
        cin >> stdnt[i];
    }
    for(int r = 0; r < TSTSIZE; r++)
    {
        for (int c = 0; c < STDSIZE; c++)
        {
            cout << "Enter " << stdnt[c] << " score for test #" << r + 1 << endl;
            cin >> tests[r][c];
            while (tests[r][c] > 100 || tests[r][c] < 0)
            {
                cout << "Enter a number between 0 and 100: ";
                cin >> tests[r][c];
            }
        }
    }
    for(int s = 0; s < STDSIZE; s++)
    {
        int testTtl = 0;
        for(int r = 0; r < TSTSIZE; r++)
        {
            testTtl += tests[r][s];
        }
        avg[s] = testTtl / TSTSIZE;
    }
        
    for(int i = 0; i < STDSIZE; i++)
    {
        cout << stdnt[i] << " has an average test score of " << avg[i] << ".\n";
    }
}

//Find largest number
int fLrgN(int array[], const int SIZE, int n)
{
    //Check if each number in the array is bigger than n
    for(int i = 0; i < SIZE; i++)
    {
        if (array[i] > n)
        {
            cout << array[i] << " is higher than " << n << endl;
        }
    }
}

//Test if its a loshu square
int test(int square[][COLSIZE], int ROWSIZE, bool &loshu)
{
    //Declare and initialize 
    int cttl = 0, rttl = 0, dttl = 0;
    
    for(int c = 0; c < COLSIZE; c++)
    {
        cttl = 0;
        for(int r = 0; r < ROWSIZE; r++)
        {
            cttl += square[r][c];
        }
        if (cttl != 15)
            loshu = false;
        
    }
    for(int r = 0; r < ROWSIZE; r++)
    {
        rttl = 0;
        for(int c = 0; c < COLSIZE; c++)
        {
            rttl += square[r][c];
        }
        if (rttl != 15)
            loshu = false;
    }
}
  

