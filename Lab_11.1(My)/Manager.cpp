#include "Manager.h"


Manager::Manager(double salary, double b) : baseSalary(salary), bonus(b) {}  

double Manager::calcSalary() const       
{
    return baseSalary + bonus;  
}