// Header file for declaration
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

// We made a class that is implement in account.cpp file
class Account
{
protected:
    int accountID;
    string customername;
    double balance;

public:
    // Parameterized Costructor
    Account(int id, string name, double bal);

    // Deposit function to deposit MONEY in the bank
    virtual void deposite(double amount);

    // Wirhdraw function to withdraw MONEY
    virtual void withdraw(double amount) ;

    virtual void display();

    ~Account() {};
};

#endif