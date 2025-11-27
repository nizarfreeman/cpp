#include "Harl.hpp"

int main(void)
{
    Harl ss;

    ss.complain("DEBUG");
    ss.complain("INFO");
    ss.complain("WARNING");
    ss.complain("ERROR");
    ss.complain("");
    return 0;
}