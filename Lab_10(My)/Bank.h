#pragma once
#include <string>
using namespace std;

class Bank
{
public:
	Bank();
	Bank(string AccountNumber, string Owner, double InitialDeposit);
	virtual ~Bank();
	void Deposit(double amount);
	void Withdraw(double amount);
	void ShowStatement();
	double getBalance() const { return Balance; }


protected:
	string AccountNumber;
	string OwnerName;
	double Balance;
};