#pragma once
#include "Employee.h"

class Manager : public Employee         
{
private:
    double baseSalary;             
    double bonus;                
public:
    Manager(double, double);         
    double calcSalary() const;      
};                        