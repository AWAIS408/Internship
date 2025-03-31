#ifndef LOAN_h
#define LOAN_H
#include <iostream>
using namespace std;
class loan
{
private:
    int loanID;
    string borowername;
    double laonamount;
    double interest;

public:
    loan(int id, string name, double amount, double rate);
    void displayloandetails();
};
#endif
