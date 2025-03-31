#ifndef BANK_H
#define BANK_H
//This is the file where all bank operations are manages
#include "Account.h"
#include "Savingaccount.h"
#include "Loan.h"
#include <vector>

class Bank
{
private:
    vector<Account *> account;
    vector<loan>loans;

public:
    void createaccount(int id, string name, double amount, bool issaving, double rate = 0);

    void createloan(int id, string name, double amount, double rate);

    void displayaccount();

    void dispalyloan();

    ~Bank();
};

#endif