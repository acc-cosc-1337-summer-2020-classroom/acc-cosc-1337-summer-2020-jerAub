//h
#include"employee.h"
#ifndef ENGINEER_H
#define ENGINEER_H

class Engineer: public Employee
{
    private:
        double base;
        double bonus;
        
    public:
        Engineer(){}
        Engineer(double basePay, double bonusAmt): base(basePay), bonus(bonusAmt){}
        double get_pay()const;
    
 
};

#endif