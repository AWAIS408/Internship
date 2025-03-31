#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "Account.h"
class accountsaving : public Account
{
private:
    double interestrate;

public:
    accountsaving(int id, string name, double bal, double rate);
    void applyinterest();
    void display() override;
};
#endif