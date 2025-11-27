#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl;
}

void Harl::info(void)
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
    std::cout <<"I think I deserve to have some extra bacon for free. I\'ve been coming for years, whereas you started working here just last month."<< std::endl;
}

void Harl::error(void)
{
    std::cout <<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}

Harl::Harl()
{
    p[0] = &Harl::debug;
    p[1] = &Harl::info;
    p[2] = &Harl::warning;
    p[3] = &Harl::error;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

void Harl::complain(std::string level)
{
    int i = 0;
    for (; i < 4; i++)
    {
        if (levels[i] == level)
            break;   
    }
    switch(i)
    {
        case 0:
            std::cout<<"[ DEBUG ]\n"; (this->*p[i])();
            std::cout<<"[ INFO ]\n"; (this->*p[i + 1])();
            std::cout<<"[ WARNING ]\n"; (this->*p[i + 2])();
            std::cout<<"[ ERROR ]\n"; (this->*p[i + 3])();
            break;
        case 1:
            std::cout<<"[ INFO ]\n"; (this->*p[i])();
            std::cout<<"[ WARNING ]\n"; (this->*p[i + 1])();
            std::cout<<"[ ERROR ]\n"; (this->*p[i + 2])();
            break;
        case 2:
            std::cout<<"[ WARNING ]\n"; (this->*p[i])();
            std::cout<<"[ ERROR ]\n"; (this->*p[i + 1])();
            break;    
        case 3:
            std::cout<<"[ ERROR ]\n"; (this->*p[i])();
            break;    
        default:
            std::cout<<"[ Probably complaining about insignificant problems ]\n";
            break;
    }
}