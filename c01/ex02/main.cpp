#include <iostream>

int main(void)
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &ref_var = var;

    std::cout<<&var<<std::endl<<stringPTR<<std::endl<<&ref_var<<std::endl<<std::endl;
    std::cout<<var<<std::endl<<*stringPTR<<std::endl<<ref_var<<std::endl;
    return (0);
}