#include "Bank.h"
void Bank::createaccount(int id, string name, double balance, bool issaving, double rate)
{
    if (issaving)
    {
        account.push_back(new accountsaving(id, name, balance, rate));
    }
    else
    {
        account.push_back(new Account(id, name, balance));
        cout << "Account Created Successfuly!" << endl;
    }
}
void Bank::createloan(int id, string name, double amount, double rate)
{
    loans.push_back(loan(id, name, amount, rate));
    cout << "! Thanks to use our service" << endl;
}
void Bank::displayaccount()
{
    cout << "\n___Account Details___ \n" << endl;
    for (const auto &acc : account)
        acc->display();
}
void Bank::dispalyloan()
{
    cout << "___Loan Detail's ___" << endl;
    for (auto &loan : loans)
        loan.displayloandetails();
}
Bank::~Bank()
{
    for (auto acc : account)
        delete acc;
}