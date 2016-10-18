
#include <iostream>
#include <string>
using namespace std;



class Account
{
public:
    void setBalance(double balance);
    double getBalance();
    void credit(double c);
    void debit(double d);
protected:
    double balance;
};


void Account::setBalance(double balance) {
    if (balance > 0) {
        balance = balance;
    } else
    {
        cout<<"Balance cannot be less than ";
    }
}
void Account::credit(double c) {
        balance = balance + c;
}
void Account::debit(double d) {
    if (balance >= c) {
        balance = balance - c;
    } else
    {
        cout<<"Debit amount exceeded account balance.";
    }
}
double Account::getBalance()() {
    balance = balance + c;
}

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
