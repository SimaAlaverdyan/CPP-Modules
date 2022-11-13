#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Anna("Anna", 22);
    Bureaucrat Jhon("Jhon", 87);

    std::cout << Anna << std::endl;
    std::cout << Jhon << std::endl;

    try
    {
        Bureaucrat Ashot("Ashot", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat Uzbek("Uzbek", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Anna.increment();
    Jhon.decrement();

    std::cout << Anna << std::endl;
    std::cout << Jhon << std::endl;
}