#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Developer.h"

using namespace std;

int main()
{
    Employee* e;              
    Manager m(20000, 5000);  
    Developer d(300, 160);

    e = &m;           
    cout << endl;
    cout << "e->calcSalary() = " << e->calcSalary() << endl;

    e = &d;               
    cout << "e->calcSalary() = " << e->calcSalary() << endl;
}

