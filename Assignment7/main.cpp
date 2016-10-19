#include <iostream>
#include <string>
#include "Account.h"

using namespace std;



int main(int argc, char *argv[]) {

    CheckingAccount acheckingAccount(10.0, 2.0);
    cout << "Checking Account Balance is " << acheckingAccount.getBalance()<<endl;
    acheckingAccount.debit(5.0);
    cout << "Checking Account Balance is " << acheckingAccount.getBalance()<<endl;
    acheckingAccount.credit(15.0);
    cout << "Checking Account Balance is " << acheckingAccount.getBalance()<<endl;



    Account a(1000.0);
    cout << "Account a's Balance is " << a.getBalance()<<endl;
    a.debit(1500.0);
    cout << "Account a's Balance is " << a.getBalance()<<endl;
    a.credit(15000.0);
    cout << "Account a's Balance is " << a.getBalance()<<endl;


    SavingsAccount asavingsAccount(10.0, 2.0);
    cout << "interest Rate is " << asavingsAccount.calculateInterest()<<endl;
    cout << "Savings Account Balance is " << asavingsAccount.getBalance()<<endl;
    asavingsAccount.debit(5.0);
    cout << "Savings Account Balance is " << asavingsAccount.getBalance()<<endl;
    asavingsAccount.credit(15.0);
    cout << "Savings Account Balance is " << asavingsAccount.getBalance()<<endl;

    return 0;
}