/* Norris Smith
   1/22/16
   Programming Assignment # 4
   Member-function defintions for class SavingsAccount */

#include <iostream>
#include <iomanip>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

// initialize static data member
double SavingsAccount::annualInterestRate = 0.0;

// calculate monthly interest for this savings account
void SavingsAccount::calculateMonthlyInterest()
{
   savingsBalance += savingsBalance * ( annualInterestRate / 12.0 );
} // ends function calculateMonthlyInterest

// function for modifying static member variable annualInterestRate
void SavingsAccount::modifyInterestRate( double i )
{
   annualInterestRate = ( i >= 0.0 && i <= 1.0 ) ? i : 0.03;
} // ends function modifyInterestRate

// prints balance of the savings account
void SavingsAccount::printBalance() const
{
   cout << fixed << '$' << setprecision( 2 ) << savingsBalance;
} // ends function printBalance


