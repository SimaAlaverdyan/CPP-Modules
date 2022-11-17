#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        const std::string   _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(const std::string &target);
		using	Form::operator=;
        ~RobotomyRequestForm();

        void	execute(const Bureaucrat &executor) const;
};

#endif