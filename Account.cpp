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
void Account::debit(double d) {
    if (balance >= d) {
        balance = balance - d;
    } else
    {
        cout<<"Debit amount exceeded account balance.";
    }
}
double Account::getBalance()() {
    return balance;
}
