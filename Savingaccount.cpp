#include "Savingaccount.h"

// Constructor that inherrit the Accout class
accountsaving::accountsaving(int id, string name, double bal,
                             double rate) : Account(id, name, bal)
{
    interestrate = rate;
}

// Applying interest on MONEY
void accountsaving::applyinterest()
{
    balance += balance * (interestrate / 100);
    cout << "interest Applied! New balance is :"
         << balance << "RS" << endl;
}

// In this function we dispalying the values from Account class
void accountsaving::display()
{
    cout << "___Acount Detail's ___" << endl;
    
    // Because there is no object we called function with Class_name
    Account::display();
    cout << "Interest rate is :" << interestrate << "%" << endl;
}