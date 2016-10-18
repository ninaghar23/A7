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
    void setBalance(double balance);
    double getBalance();
    void credit(double c);
    void debit(double d);
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

#endif //ASSIGNMENT_2_ACCOUNT_H
