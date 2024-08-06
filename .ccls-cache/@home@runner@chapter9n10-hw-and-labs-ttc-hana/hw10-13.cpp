//HW10-13.cpp - displays two monthly car payments
//Created/revised by Hannah Haynes on 5 Aug 2024

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
void getPayment(int, double, int, double &);

int main()
{
    //declare variables
    int carPrice = 0;
    int rebate = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;

    cout << "Car price (after any trade-in): $";
    cin >> carPrice;
    cout << "Rebate: $";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;

    //call function to calculate payments
    getPayment(carPrice - rebate,
        creditRate / 12, term * 12, creditPayment);
    getPayment(carPrice, 
        dealerRate / 12, term * 12, dealerPayment);    
    //assign values to calculate payments
    
    //display payments
    cout << fixed << setprecision(2) << endl; 
    cout << "Credit union payment: $" 
        << creditPayment << endl;
    cout << "Dealer payment: $"
        << dealerPayment << endl;
    
    return 0;
}//end of main function    

//*****function definitions*****
void getPayment(int prin,
                  double monthRate, 
                  int months,
                  double &monthPay)
{
    //calculates and returns a monthly payment
    monthPay = prin * monthRate / 
        (1 - pow(monthRate + 1, -months));
} //end of getPayment function//*****function definition*****
