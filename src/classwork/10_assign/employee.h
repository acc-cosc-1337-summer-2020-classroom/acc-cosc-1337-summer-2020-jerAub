//h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee //Abstract Class
{
    public:
    Employee(){}
    virtual double get_pay() const= 0; //pure virtual funtion

    private:

};

#endif