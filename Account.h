//
// Created by Sean Pitterson on 10/18/16.
//

#ifndef ASSIGNMENT_2_ACCOUNT_H
#define ASSIGNMENT_2_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;



class Account
{
public:

    Account(double b);
    double getBalance();
    void credit(double c);
    bool debit(double d);
protected:
    double balance;
};




class SavingsAccount: public Account
{
public:

private:
};

class CheckingAccount: public Account
{
public:

private:

};


int main(int argc, char *argv[])
{

    return 0;
}

class CheckingAccount: public Account
{
public:
    CheckingAccount(double initialBalance, double feeAmmount);
    void credit(double c);
    void debit(double d);

private:
double fee;
};


#endif //ASSIGNMENT_2_ACCOUNT_H
