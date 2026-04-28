#include "Developer.h"

Developer::Developer(double rate, int hours) : hourRate(rate), hoursWorked(hours) {} 

double Developer::calcSalary() const   
{
    return hourRate * hoursWorked;   
}