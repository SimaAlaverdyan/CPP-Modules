#include "Form.hpp"

const char  *Form::GradeTooHighException::what() const throw()
{
    return("The grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() : _msg("The grade is too low") {}

Form::GradeTooLowException::GradeTooLowException(const char *_msg) : _msg(_msg) {}

const char	*Form::GradeTooLowException::what() const throw()
{
	return (this->_msg);
}

const char  *Form::InvalidFormException::what() const throw()
{
	return ("Invalid form");
}

Form::Form() : _name(), _isSigned(false), _signedGrade(1), _execGrade(1) { }

Form::Form(const Form &copy) : _name(copy._name), _isSigned(copy._isSigned), 
_signedGrade(copy._signedGrade), _execGrade(copy._execGrade) {}

Form::Form(const std::string &name, int signedGrade, int execGrade) : _name(name),
_isSigned(false), _signedGrade(signedGrade), _execGrade(execGrade) 
{
    if (signedGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signedGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::~Form() {}

Form	&Form::operator=(const Form &copy)
{
	_isSigned = copy._isSigned;
	_target = copy._target;
	return (*this);
}

const std::string   &Form::getName() const
{
    return(this->_name);
}

const std::string	&Form::getTarget(void) const
{
	return (this->_target);
}

int Form::getSignedGrade() const
{
    return(this->_signedGrade);
}

int Form::getExecGrade() const
{
    return(this->_execGrade);
}

bool Form::isSigned() const
{
    return(this->_isSigned);
}

std::ostream &operator<<(std::ostream &obj, const Form &b)
{
    obj << "Form: " << b.getName() << std::endl;
    obj << "Signed: " << b.isSigned() << std::endl;
    obj << "Signed Grade: " << b.getSignedGrade() << std::endl;
    obj << "Executed Grade: " << b.getExecGrade() << std::endl;

    return(obj);
}

void    Form::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() <= _signedGrade)
        _isSigned = true;
    else
        throw GradeTooLowException();
}

void    Form::check_executor(const Bureaucrat &executor) const
{
    if (executor.getGrade() > _execGrade)
        throw GradeTooLowException("Bureaucrat is not authorized, their grade is too low");
	if (!this->_isSigned)
		throw InvalidFormException();
}