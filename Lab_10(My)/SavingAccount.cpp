#include "SavingAccount.h"
#include <iostream>

SavingAccount::SavingAccount(const std::string& ANumber, const std::string& AOwner,
    double AInitialDeposit, double ARate)
    : Bank(ANumber, AOwner, AInitialDeposit)
{
    FInterestRate = ARate;
}

SavingAccount::~SavingAccount()
{
    std::cout << "bye bye SavingAccount (" << AccountNumber << ")" << std::endl;
}

void SavingAccount::ApplyInterest() {
    std::cout << "Interest applied" << std::endl;
    Deposit(getBalance() * (FInterestRate / 100.0));
}