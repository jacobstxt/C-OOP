#include <iostream>
#include <windows.h>
#include "SavingAccount.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Bank acc("UA001", "Іван Петренко", 1000.0);
    /*acc.ShowStatement();
    acc.Deposit(500.0);
    acc.Withdraw(200.0);
    acc.ShowStatement();*/

    std::cout << std::endl;

	Bank* ptrAcc = new SavingAccount("UA002", "Марія Коваль", 2000.0, 10.0);
    delete ptrAcc;



    SavingAccount sav("UA002", "Марія Коваль", 2000.0, 10.0);
    /*sav.ShowStatement();
    sav.ApplyInterest();
    sav.ShowStatement();*/
}

