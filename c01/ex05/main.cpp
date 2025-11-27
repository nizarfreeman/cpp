#include <iostream>


#include <iostream>
#include <string>

class Harl
{
    private:
        void debug(void)
        {
            std::cout << "DEBUG\n" << std::endl;
        }
        void info(void)
        {
            std::cout << "INFO\n" << std::endl;
        }
        void warning(void)
        {
            std::cout << "WARNING\n" << std::endl;
        }
        void error(void)
        {
            std::cout << "ERROR\n" << std::endl;
        }
    public:
        void (Harl::*p[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

        void complain(std::string level)
        {
            for (int i = 0; i < 4; i++)
            {
                if (levels[i] == level)
                {
                    (this->*p[i])();
                    return;
                }
            }
            std::cout << "Unknown level\n" << std::endl;
        }
};


int main(int argc, char const *argv[])
{
    
    return 0;
}
