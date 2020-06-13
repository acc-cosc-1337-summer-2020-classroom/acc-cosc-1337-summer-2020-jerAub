//write include statements
#include "variables.h"
#include <iostream> //for input output 
#include<iomanip> //to use setprecision() for formatting


//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip rate: ";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	cout<<std::fixed<<std::setprecision(2);
	cout<<setw(15)<<"Meal Amount: "<<setw(7)<<meal_amount<<"\n";
	cout<<setw(15)<<"Sales Tax: "<<setw(7)<<tax_amount<<"\n";
	cout<<setw(15)<<"Tip Amount: "<<setw(7)<<tip_amount<<"\n";
	cout<<setw(15)<<"TOTAL: "<<setw(7)<<total<<"\n";

	return 0;
}
