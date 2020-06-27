//write include statements
#include"dna.h"
#include<iostream>


//write using statements
using std::cout;
using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char repeat; //user will enter y or Y to continue 
	do {
	int choice;
	cout<<"Enter 1 for Get GC Content"<<"\n";
	cout<<"Enter 2 for Get DNA Compliment"<<"\n";
	cout<<"Enter your choice: ";
	cin>>choice;
	cout<<"\n";

	if(choice == 1)
	{
		string dna_string;
		cout<<"Please enter a DNA string: ";
		cin>>dna_string;
		cout<<"GC Content: "<<get_gc_content(dna_string)<<"\n";
	}
	else if(choice == 2)
	{
		string dna_string;
		cout<<"Please enter a DNA string: ";
		cin>>dna_string;
		cout<<"DNA Compliment: "<<get_dna_complement(dna_string)<<"\n";
	}

	cout<<"Enter Y to continue"<<"\n";
	cin>>repeat;
	cout<<"\n";
	}
	while(repeat == 'Y' || repeat == 'y');

	return 0;
}