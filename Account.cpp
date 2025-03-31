#include "Account.h"
// Initialize a Constructor
Account::Account(int id, string name, double bal)
{
    accountID = id;
    customername = name;
    balance = bal;
}
// Depsite function to add MONEY in the Account
void Account::deposite(double amount)
{
    if (amount <= 0)
    {
        throw invalid_argument("Amount must be Possitive!");
    }
    balance += amount;
    cout << "MONEY is added succesfuly!.New balance is :" << balance << "RS" << endl;
}
// Withdraw funciton to wthdraw MONEY from Account
void Account::withdraw(double amount)
{
    if (amount > balance)
    {
        throw runtime_error("Insufficient Balance! Please Enter the corrsct amounnt");
    }
    balance -= amount;
    cout << "Amount Withdraw succesfuly! New balance is :" << balance << "RS" << endl;
}
// Display -> to dispaly all things
void Account::display()
{
    cout << "Account ID is :" << accountID << endl;
    cout << "Customer name is :" << customername << endl;
    cout << "Balance is :" << balance << "RS" << endl;
}