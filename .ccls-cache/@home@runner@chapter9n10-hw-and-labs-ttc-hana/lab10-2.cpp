//Lab10-2.cpp - displays total owed
//Created/revised by Hannah Haynes on 5 Aug 2024

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayOptions ();
void getRegular(int windows, double price, double &total);
void getBoGo(int windows, double price, double &total);

int main()
{
    int option = 0;
    int numOrdered = 0;
    double winPrice = 0.0;
    double totalOwed = 0.0;

    cout << fixed << setprecision(2);
    displayOptions();
    cout << "Enter pricing option? ";
    cin >> option;

    if (option ==1 || option ==2)
    {
        cout << "Enter number of windows: ";
        cin >> numOrdered;
        cout << "Price per window: $";
        cin >> winPrice;

        if (option == 1)
            getRegular(numOrdered, winPrice, totalOwed);
        else
            getBoGo(numOrdered, winPrice, totalOwed);
        //end if
        cout << "Total owed: $" << totalOwed << endl;
    }
    else
        cout << "Invalid option" << endl;
    //end if
    return 0;
} //end of main function

//*****function definitions*****
void displayOptions ()
{
    cout << "Pricing options:" << endl;
    cout << "1 Regular pricing" << endl;
    cout << "2 BOGO pricing" << endl;
} //end of displayOptions function

void getRegular(int windows, double price, double &total)
{
    total = windows * price;
} //end getRegular function

void getBoGo(int windows, double price, double &total)
{
    total = (windows / 2 + windows % 2) * price;
} //end getBoGo function