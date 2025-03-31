#include "Loan.h"

// Costrutor to initialize values by parameter
loan::loan(int id, string name, double amount, double rate)
{
    loanID = id;
    borowername = name;
    laonamount = amount;
    interest = rate;
}

void loan ::displayloandetails()
{
    cout << "Loan ID is :" << loanID << endl;
    cout << "The name of borower is :" << borowername << endl;
    cout << "Loan amount is :" << laonamount << endl;
    cout << "The interest rate is :" << interest << endl;
}
