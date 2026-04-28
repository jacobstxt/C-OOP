#pragma once
#include "Employee.h"

class Developer : public Employee  
{
private:
    double hourRate;                   
    int hoursWorked;        
public:
    Developer(double, int);            
    double calcSalary() const;        
};                                  