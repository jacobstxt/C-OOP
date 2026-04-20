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

void Bank::Deposit(double amount)
{
	cout << "Depositing $" << amount << " to account " << AccountNumber << endl;
	Balance += amount;
}

void Bank::Withdraw(double amount)
{
	cout << "Withdrawing $" << amount << " from account " << AccountNumber << endl;
	if (amount > Balance)
		cout << "Insufficient funds." << endl;
	else
		Balance -= amount;
}

void Bank::ShowStatement()
{
	cout << "Account Number: " << AccountNumber << endl;
	cout << "Owner Name: " << OwnerName << endl;
	cout << "Balance: $" << Balance << endl;
}


Bank::~Bank() 
{
	cout << "Closing account " << AccountNumber << " owned by " << OwnerName << endl;
}