/*
 *File: main.cpp
 *Author: Norman Lee
 *Date: 7/10/15
 *Purpose: Payroll
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float empNum, gPay=0, sTax=0, fTax=0, fica=0, nPay=0, // employee number, gross pay, state tax, federal tax, FICA
          eNumSum, gPaySum, sTaxSum, fTaxSum, ficaSum, nPaySum; //Sums
    
  
    while (empNum != 0)
    {
        //Loop prompt and inputs
        cout << "(To end the program put a '0' in all fields.)\n";
        cout << "Enter the employee number: ";
        cin >> empNum;
        cout << "Enter " << empNum << "'s gross pay: ";
        cin >> gPay;
        cout << "Enter " << empNum << "'s state tax: ";
        cin >> sTax;
        cout << "Enter " << empNum << "'s federal tax: ";
        cin >> fTax;
        cout << "Enter " << empNum << "'s FICA withholdings: ";
        cin >> fica;
        
        //Test for valid data and calculate net pay and sums
        if (empNum >= 0 && gPay >= 0 && sTax >= 0 && fTax >= 0 && fica >= 0 && gPay >= sTax && gPay >= fTax && gPay >= fica && gPay >= (sTax + fTax + fica))
        {
            nPay = gPay-(sTax+fTax+fica);
            gPaySum += gPay;
            sTaxSum += sTax;
            fTaxSum += fTax;
            ficaSum += fica;
            nPaySum += nPay;
        }
        else
        {
            cout << "Error: Enter data for employee again\n";
        }

        cout << "<Press enter to continue>\n";
        cin.ignore();
        cin.get();
    }
    cout << "Total Gross Pay: " << gPaySum << endl;
    cout << "Total State Tax: " << sTaxSum << endl;
    cout << "Total Federal Tax: " << fTaxSum << endl;
    cout << "Total FICA Withholdings: " << ficaSum << endl;
    cout << "Total Net Pay: " << nPaySum << endl;
    return 0;
}