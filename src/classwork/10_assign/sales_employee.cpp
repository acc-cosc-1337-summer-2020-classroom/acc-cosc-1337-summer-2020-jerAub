//cpp
#include "sales_employee.h"

double SalesEmployee::get_pay() const
{
    return hours * rate + commision;
}