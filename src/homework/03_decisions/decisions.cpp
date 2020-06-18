#include "decisions.h"
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A" || letter_grade == "a")//Included lowercase letters for user errors
	{
		return 4;
	}
	else if(letter_grade == "B" || letter_grade == "b")//Included lowercase letters for user errors
	{
		return 3;
	}
	else if (letter_grade == "C" || letter_grade == "c")//Included lowercase letters for user errors
	{
		return 2;
	}
	else if (letter_grade == "D" || letter_grade == "d")//Included lowercase letters for user errors
	{
		return 1;
	}
	else if (letter_grade == "F" || letter_grade == "f")//Included lowercase letters for user errors
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0)
	{
		return -1;
	}
	
	return credit_points / credit_hours;
}

