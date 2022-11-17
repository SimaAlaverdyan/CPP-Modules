#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm	shrub("shrub");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	president("president");

	Bureaucrat				b1("Bureaucrat1", 145);
	Bureaucrat				b2("Bureaucrat2", 137);
	Bureaucrat				b3("Bureaucrat3", 1);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl;

    std::cout << shrub << std::endl;
    b3.executeForm(shrub);
	b1.signForm(shrub);
	b1.executeForm(shrub);
	b2.executeForm(shrub);
	b3.executeForm(shrub);
	std::cout << shrub << std::endl << std::endl;

    std::cout << robot << std::endl;
    b2.executeForm(robot);
	b3.signForm(robot);
	b3.executeForm(robot);
	b3.executeForm(robot);
	b3.executeForm(robot);
	std::cout << robot << std::endl << std::endl;

    std::cout << president << std::endl;
    b3.signForm(president);
    b3.executeForm(president);
}