#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 3)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
	Form("PresidentialPardonForm", 25, 3), _target(copy._target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("PresidentialPardonForm", 25, 3), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout <<this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
