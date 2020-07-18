//h
#include "employee.h"
#ifndef SALES_EMPLOYEE_H
#define SALES_EMPLOYEE_H

class SalesEmployee: public Employee
{
    private:
        double rate;
        double hours;
        double commision; 

    public:
        SalesEmployee(){}
        SalesEmployee(double basePay, double hrs, double comAmt): rate(basePay), hours(hrs), commision(comAmt){}
        double get_pay()const;


       
};
#endif