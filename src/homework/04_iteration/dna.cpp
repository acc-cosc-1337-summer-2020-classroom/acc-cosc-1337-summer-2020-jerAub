#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& str)
{
    double count = 0;
    double len = str.length();
    for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'G' || str[i] == 'C')
            {
                count += 1;
            }
        }
    return count/len;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string str)
{
    std::string reverse = "";
    for(int i = 1; i <= str.length(); i++)
    {
        reverse.push_back(str[str.length() - i]);
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna) 
{
    std::string reverse_dna = get_reverse_string(dna);
    for(int i = 0; i < reverse_dna.length(); i++)
    {
        if(reverse_dna[i] == 'A')
        {
            reverse_dna[i] = 'T';
        }
        else if(reverse_dna[i] == 'T')
        {
            reverse_dna[i] = 'A';
        }
        else if(reverse_dna[i] == 'C')
        {
            reverse_dna[i] = 'G';
        }
        else if(reverse_dna[i] == 'G')
        {
            reverse_dna[i] = 'C';
        }
    }
    return reverse_dna;
}
