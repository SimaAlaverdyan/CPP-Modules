#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    _grade = copy._grade;
    return (*this);
}

const std::string &Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::increment()
{
    if (_grade != 1)
        _grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrement()
{
    if (_grade != 150)
        _grade++;
    else
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("The grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("The grade is too low");
}

std::ostream &operator<<(std::ostream &obj, const Bureaucrat &b)
{
    obj << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (obj);
}