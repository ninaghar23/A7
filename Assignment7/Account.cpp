//
// Created by Sean Pitterson on 10/18/16.
//

#include "Account.h"
using namespace std;

Account::Account(double b){
    if (b > 0.0) {
        balance = b;
    } else
    {
        balance=0.0;
        cout<<"initial balance invalid";
    }
}


void Account::credit(double c) {
    balance = balance + c;
}
bool Account::debit(double d) {
    if (balance >= d) {
        balance = balance - d;
        return true;
    } else
    {
        cout<<"Debit amount exceeded account balance.";
        return false;
    }
}
double Account::getBalance() {
    return balance;
}

SavingsAccount::SavingsAccount(double initialBalance, double intrate):Account(initialBalance){
    balance = initialBalance;
    interestrate = intrate;
}
    double SavingsAccount::calculateInterest(){
        return (balance*interestrate);
    }


CheckingAccount::CheckingAccount(double initialBalance, double feeAmmount) : Account(initialBalance) {
    balance=initialBalance;
    fee=feeAmmount;
}
void CheckingAccount::credit(double c){
    Account::credit(c);
    balance=balance - fee;
}

void CheckingAccount::debit(double d){
    if(Account::debit(d)){
        balance=balance - fee;
    }
}

