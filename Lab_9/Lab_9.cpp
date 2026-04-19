#include "Sphere.h"
#include "Bank.h"
#include <iostream>

int main()
{
    
	/*Sphere unitSphere;
	Sphere mySphere(5.0);
	unitSphere.displayStatistics();
	mySphere.setRadius(4.2);
	cout << "d =" << mySphere.getDiameter() << endl;*/


	Bank anotherBank;
	Bank myBank("123456789", "John Doe", 1000.0);
	myBank.Deposit(500.0);
	myBank.Withdraw(200.0);
	myBank.ShowStatement();


}

