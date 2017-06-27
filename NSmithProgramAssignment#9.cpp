/* Norris Smith
   2/13/16
   Programming Assignment # 9
   Designed to create a class then use a static data member to store the annual interest rate for two individual savers
   The next steps are to figure the annual interst rate divided by 12 & adding that total to the overall balance of the
   savers. Then the program uses the member function modifyInterestRate and changes the interest rate 3% to 4%. Finally
   the final display is printed to the screen
   Note files included */

#include <iostream>
#include <iomanip>
#include "SavingsAccount.cpp"
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

int main()
{
   SavingsAccount saver1( 2000.0 );
   SavingsAccount saver2( 3000.0 );

   SavingsAccount::modifyInterestRate( .03 ); // changes interest rate

   cout << "Initial balances:\nSaver 1: ";
   saver1.printBalance(); // calls function
   cout << "\tSaver 2: ";
   saver2.printBalance(); // calls function

   saver1.calculateMonthlyInterest(); // calls function
   saver2.calculateMonthlyInterest(); // calls function

   cout << "\n\nBalances after 1 month's interest applied at .03:\n"
        << "Saver 1: ";
   saver1.printBalance(); // calls function
   cout << "\tSaver 2: ";
   saver2.printBalance(); // calls function

   SavingsAccount::modifyInterestRate( .04 ); // changes interest rate again
   saver1.calculateMonthlyInterest(); // calls function
   saver2.calculateMonthlyInterest(); // calls function

   cout << "\n\nBalances after 1 month's interest applied at .04:\n"
        << "Saver 1: ";
   saver1.printBalance(); // calls function
   cout << "\tSaver 2: ";
   saver2.printBalance(); // calls function
   cout << endl;
} // ends main

/* Professor, below is the header file i came up with since the website wouldn't
   let me submit # 8 or 9's header files

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class SavingsAccount
{
public:
   // constructor sets balance to value greater than or equal to zero
   SavingsAccount( double b )
   {
      savingsBalance = ( b >= 0.0 ? b : 0.0 );
   } // ends SavingsAccount constructor

   void calculateMonthlyInterest(); // calculate interest; add to balance
   static void modifyInterestRate( double );
   void printBalance() const;
private:
   double savingsBalance; // the account balance
   static double annualInterestRate; // the interest rate of all accounts
}; // ends class SavingsAccount

#endif

*/
