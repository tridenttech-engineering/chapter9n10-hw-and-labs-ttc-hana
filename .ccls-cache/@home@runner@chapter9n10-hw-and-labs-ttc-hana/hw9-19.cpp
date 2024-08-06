//HW9-19.cpp - displays two monthly car payments
//Created/revised by Hannah Haynes on 4 Aug 2024

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototype
double getPayment(int, double, int);
double getTotal(double, int);

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
    double totalCreditPayment = 0.0;
    double totalDealerPayment = 0.0;

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
    creditPayment = getPayment(carPrice - rebate,
        creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, 
        dealerRate / 12, term * 12); 
    //call function to calculate total payments
    totalCreditPayment = getTotal(creditPayment, term * 12);
    totalDealerPayment = getTotal(dealerPayment, term * 12);

    
    //display payments and totals
    cout << fixed << setprecision(2) << endl; 
    cout << "Credit union payment: $" 
        << creditPayment << endl;
    cout << "Total Credit Union Payments: $"
        << totalCreditPayment << endl;
    cout << "Dealer payment: $"
        << dealerPayment << endl;
    cout << "Total Dealer Payments: $"
        << totalDealerPayment << endl;
    
    return 0;
}//end of main function    

//*****function definitions*****
double getPayment(int prin,
                  double monthRate, 
                  int months)
{
    //calculates and returns a monthly payment
    double monthlyPayment = 0.0;
    double denominator = 0.0;
    
    denominator = (1 - pow(monthRate + 1, -months));
    if (denominator != 0)
        monthlyPayment = prin * monthRate / denominator;
    else
        monthlyPayment = -1;
    return monthlyPayment;
} //end of getPayment function

double getTotal(double payment, int months)
{
    double total = 0.0;
    return total;
} //end of getTotal function
