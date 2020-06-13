#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for get_sales_tax_amount here
//function returns product of meal_amount and tax_rate
double get_sales_tax_amount(double meal_amount)
{
	double tax_rate = 0.0675;
	return tax_rate * meal_amount;
}

//function code for get_tip_amount 
//funtion returns the product of meal_amount and tip_rate
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}

