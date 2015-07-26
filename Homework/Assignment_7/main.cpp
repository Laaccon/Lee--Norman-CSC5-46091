/* 
 * File:   main.cpp
 * Author: Norman Lee
 * Date: 7/22/15
 * Purpose:  Assignment 7, Arrays
 */

//System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

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
bool isAcct(const int[], int, int);
bool isWin(const int[], int, int);
bool isWinBi(const int[], int, int);
void selectionSort(string[], const int);
bool binarySearch(string[], const int, string);
void selSort(int[], const int);
void bnchLin(int[], const int, int, int &);
void bnchBin(int[], const int, int, int &);
void bnchSel(int[], const int, int &);
void bnchBub(int[], const int, int &);

//Execution begins
int main(int argc, char** argv) {
    //Seed random
    unsigned seed = time(0);
    srand(seed);
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

//Gaddis 8th edition chapter 8 problem 1
void problem1()
{
    //Declare and Initialize Variables
    //Size of array for account numbers
    const int SIZE = 18;
    bool valid = false;
    //Valid account numbers
    int actnum[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                        1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    //number to be checked
    int num = 0;
    cout << "Enter the number for a charge account: ";
    cin >> num;
    //Check if valid
    valid = isAcct(actnum, SIZE, num);
    //Output if it's valid or not
    if (valid == true)
    {
        cout << "This number is a valid account.\n";
    }
    else
    {
        cout << "This number is not a valid account.\n";
    }   
}
//Gaddis 8th edition chapter 8 problem 2
void problem2()
{
    //Declare and Initialize Variables
    const int SIZE = 10; // number of lotto tickets bought
    //lucky numbers played
    int lucky[SIZE] = {13579, 26791, 26792, 33445, 55555,
                        62483, 77777, 79422, 85647, 93121};
    int winNum = 0;
    bool winner = false;
    //Prompt input for winning number
    cout << "Enter this weeks winning number: ";
    cin >> winNum;
    //Check for winner
    winner = isWin(lucky, SIZE, winNum);
    //Output if winner or not
    if (winner == true)
    {
        cout << "You have won the lottery!!!!.\n";
    }
    else
    {
        cout << "No winning numbers, better luck next time.\n";
    }   
}
//Gaddis 8th edition chapter 8 problem 3
void problem3()
{
    //Declare and Initialize Variables
    const int SIZE = 10; // number of lotto tickets bought
    //lucky numbers played
    int lucky[SIZE] = {13579, 26791, 26792, 33445, 55555,
                        62483, 77777, 79422, 85647, 93121};
    int winNum = 0;
    bool winner = false;
    //Prompt input for winning number
    cout << "Enter this weeks winning number: ";
    cin >> winNum;
    //Check for winner
    winner = isWinBi(lucky, SIZE, winNum);
    //Output if winner or not
    if (winner == true)
    {
        cout << "You have won the lottery!!!!.\n";
    }
    else
    {
        cout << "No winning numbers, better luck next time.\n";
    }   
}
//Gaddis 8th edition chapter 8 problem 6
void problem4()
{
    //Declare and Initialize Variables
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };
    //sort list
    selectionSort(names, NUM_NAMES);
    //output sorted list
    for(int i = 0; i < NUM_NAMES; i++)
    {
        cout << names[i] << "   ";
    }
    cout << endl;
}
//Gaddis 8th edition chapter 8 problem 7
void problem5()
{
    //Declare and Initialize Variables
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };
    string usrname = "";
    cout << "Enter a name: ";
    cin.ignore();
    getline (cin, usrname);
    //sort list
    selectionSort(names, NUM_NAMES);
    if (binarySearch(names, NUM_NAMES, usrname))
    {
        cout << "The name was on the list.\n";
    }
    else
    {
        cout << "Name not found.\n";
    }
}   
//Gaddis 8th edition chapter 8 problem 8
void problem6()
{
    //Declare and initialize variables
    const int SIZE = 20;
    int nums[SIZE] = {};
    int usrnum = 0;
    int count = 0;
    
    cout << "Random Array:";
    for(int i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 100; // 0-99
    }
    //output random array
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << "Enter a number in the array: ";
    cin >> usrnum;
    //Linear search
    bnchLin(nums, SIZE, usrnum, count);
    cout << "Linear search: " << count << endl;
    //selection sort
    selSort(nums, SIZE);
    //output sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << nums[i] << " ";
    }
    //Binary search
    bnchBin(nums, SIZE, usrnum, count);
    cout << endl << "Binary search: " << count << endl;
}
//Gaddis 8th edition chapter 8 problem 9
void problem7()
{
    //Declare and initialize variables
    const int NSIZE = 20;
    int nums1[NSIZE] = {};
    int nums2[NSIZE] = {};
    int usrnum = 0;
    int count = 0;
    
    cout << "Random Array:";
    for(int i = 0; i < NSIZE; i++)
    {
        nums1[i] = rand() % 100; // 0-99
        nums2[i] = nums1[i];
    }
    //Output random array
    for(int i = 0; i < NSIZE; i++)
    {
        cout << nums1[i] << " ";
    }
    bnchSel(nums1, NSIZE, count);
    cout << endl << "Selection Sort: " << count << endl;
    bnchBub(nums2, NSIZE, count);
    cout << "Bubble Sort: " << count << endl;
}

bool isAcct(const int actnum[], int SIZE, int num)
{
    for(int i = 0; i < SIZE; i++)
    {
        if (num == actnum[i])
        {
            return true;
        }
    }
    return false;
}

bool isWin(const int lucky[], int SIZE, int winNum)
{
    for(int i = 0; i < SIZE; i++)
    {
        if (winNum == lucky[i])
        {
            return true;
        }
    }
    return false;
}

bool isWinBi(const int lucky[], int SIZE, int winNum)
{
    int first = 0, last = SIZE - 1, middle;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (lucky[middle] == winNum)
        {
            return true;
        }
        else if (lucky[middle] > winNum)
        {
            last = middle - 1;
        }
        else
            first = middle + 1;
    }
    return false;
}

void selectionSort(string names[], const int NUM_NAMES)
{
    int startScan, minIndex;
    string minValue;
    for(startScan = 0; startScan < (NUM_NAMES -1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan];
        for(int index = startScan + 1; index < NUM_NAMES; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;                        
            }
        }
        names[minIndex] = names[startScan];
        names[startScan] = minValue;
    }
}

bool binarySearch(string names[], const int NUM_NAMES, string usrname)
{
    int first = 0, last = NUM_NAMES - 1, middle; 
    bool found = false; // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate midpoint
        if (names[middle] == usrname) // If value is found at mid
        {
            return true;
        }
        else if (names[middle] > usrname) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return false;
}

void bnchLin(int nums[], const int SIZE, int usrnum, int &count)
{
    //count till we find the number
    for(int i = 0; i < SIZE; i++)
    {
        ++count;
        if(nums[i] == usrnum)
        {
            return;
        }
    }
}

void bnchBin(int nums[], const int SIZE, int usrnum, int &count)
{
    //Reinitialize count
    count = 0;
    int first = 0, last = SIZE - 1, middle; 
    bool found = false; // Flag
    while (!found && first <= last)
    {
        ++count;
        middle = (first + last) / 2; // Calculate midpoint
        if (nums[middle] == usrnum) // If value is found at mid
        {
            return;
        }
        else if (nums[middle] > usrnum) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1; // If value is in upper half
    }
    return;
}
void selSort(int nums[], const int SIZE)
{
    int startScan, minIndex, minValue;
    for(startScan = 0; startScan < (SIZE -1); startScan++)
    {
        minIndex = startScan;
        minValue = nums[startScan];
        for(int index = startScan + 1; index < SIZE; index++)
        {
            if (nums[index] < minValue)
            {
                minValue = nums[index];
                minIndex = index;                        
            }
        }
        nums[minIndex] = nums[startScan];
        nums[startScan] = minValue;
    }
}
void bnchSel(int nums1[], const int NSIZE, int &count)
{
    int startScan, minIndex, minValue;
    for(startScan = 0; startScan < (NSIZE -1); startScan++)
    {
        minIndex = startScan;
        minValue = nums1[startScan];
        for(int index = startScan + 1; index < NSIZE; index++)
        {
            if (nums1[index] < minValue)
            {
                ++count;
                minValue = nums1[index];
                minIndex = index;                        
            }
        }
        nums1[minIndex] = nums1[startScan];
        nums1[startScan] = minValue;
    }
}

void bnchBub(int nums2[], const int NSIZE, int &count)
{
    //reinitialize count
    count = 0;
    int temp;
    bool swap;
    do
    {
        swap = false;
        for (int i = 0; i < (NSIZE - 1); i++)
        {
            if (nums2[i] > nums2[i + 1])
            {
                ++count;
                //Swap
                temp = nums2[i];
                nums2[i] = nums2[i + 1];
                nums2[i + 1] = temp;
                swap = true;
            }
        }
    }while(swap);
}