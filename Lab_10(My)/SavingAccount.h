#pragma once
#include "Bank.h"

class SavingAccount : public Bank {
private:
    double FInterestRate;

public:
    SavingAccount(const string& ANumber, const string& AOwner,
        double AInitialDeposit, double ARate);

    void ApplyInterest();
};