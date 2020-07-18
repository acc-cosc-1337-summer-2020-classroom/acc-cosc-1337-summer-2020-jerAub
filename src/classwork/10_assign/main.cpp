//main
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"
#include<iostream>

int main()
{
  const int SIZE = 2;
  Employee* employeeList[SIZE]; //reserve memory 

  //create instances of Employee of type Engineer and SalesPerson in dynamic memory 
  employeeList[0] = new Engineer(2000, 500); //pay == basepay + bonus
  employeeList[1] = new SalesEmployee(15, 40, 500); //pay == rate * hours + commision 

  //use the data in memory 
  for (auto employee: employeeList)
    {
      std::cout<<"Employee pay: "<<employee->get_pay()<<"\n";
    }

  //free memory
  for (int i = 0; i < SIZE; ++i)
  {
    delete employeeList[i];
    employeeList[i] = nullptr;
  }


  return 0;
}