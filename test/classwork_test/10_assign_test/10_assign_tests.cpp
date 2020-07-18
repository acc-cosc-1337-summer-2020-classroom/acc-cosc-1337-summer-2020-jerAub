#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"
#include <iostream>
#include <memory>
using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify class function Engineer::getpay")
{
	Employee* eng = new Engineer(1500, 400);
	REQUIRE(eng->get_pay() == 1900);
	delete eng;
}

TEST_CASE("Verify class function SalesEmployee::getpay")
{
	Employee* sales = new SalesEmployee(10, 40,500);
	REQUIRE(sales->get_pay() == 900);
	delete sales;
}

