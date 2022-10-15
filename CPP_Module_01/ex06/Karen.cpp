#include "Karen.hpp"

Karen::Karen(void) 
{
    Karen::ptrFunc[0] = &Karen::debug;
    Karen::ptrFunc[1] = &Karen::info;
    Karen::ptrFunc[2] = &Karen::warning;
    Karen::ptrFunc[3] = &Karen::error;
}

Karen::~Karen(void) {}

void Karen::debug(void)
{
    std::cout << "\033[0;32mDEBUG level: \033[0m";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
}

void Karen::info(void)
{
    std::cout << "\033[0;36mINFO level: \033[0m";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!";
    std::cout << std::endl;
}

void Karen::warning(void)
{
    std::cout << "\033[0;33mWARNING level: \033[0m";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
    std::cout << std::endl;
}

void Karen::error(void)
{
    std::cout << "\033[0;31mERROR level: \033[0m";
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void Karen::complain(std::string level)
{
    std::string arr[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (!arr[i].compare(level))
        {
            (this->*ptrFunc[i])();
            break;
        }
    }
}