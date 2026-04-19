#pragma once
#include <string>
using namespace std;

class Bank
{
public:
	Bank();
	Bank(string AccountNumber, string Owner, double InitialDeposit);
	void Deposit(double amount);
	void Withdraw(double amount);
	void ShowStatement();
	double getBalance() const { return Balance; }


private:
	string AccountNumber;
	string OwnerName;
	double Balance;
};