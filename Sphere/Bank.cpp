#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank() : AccountNumber(""), OwnerName(""), Balance(0) {}

Bank::Bank(string accountNumber, string owner, double initialDeposit)
{
	AccountNumber = accountNumber;
	OwnerName = owner;
	Balance = initialDeposit;
}  