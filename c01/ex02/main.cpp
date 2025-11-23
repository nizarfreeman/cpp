#include <iostream>

int main(int argc, char const *argv[])
{
 
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &ref_var = var;

    std::cout<<&var<<std::endl<<stringPTR<<std::endl<<&ref_var<<std::endl;
    return 0;
}