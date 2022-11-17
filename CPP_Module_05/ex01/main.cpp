#include "Form.hpp"

int main()
{
    Form form1("form1", 25, 64);
    Form form2("form2", 15, 100);

    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;

    try
    {
        Form form3("form3", 0, 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    Bureaucrat  bur1("b1", 10);
    Form        form4("form4", 150, 150);

    std::cout << form4 << std::endl;
    bur1.signForm(form4);
    std::cout << form4 << std::endl;

    Bureaucrat  bur2("b2", 40);
    Form        form5("form5", 15, 81);

    std::cout << form5 << std::endl;
    bur2.signForm(form5);
    std::cout << form5 << std::endl;
}