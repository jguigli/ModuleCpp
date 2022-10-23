#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0)
{

}

Form::Form(const std::string name, const int gts, const int gte) : _name(name), _gradeToSign(gts), _gradeToExec(gte)
{
	_signed = false;
	if (_gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(Form const& copie) : _name(copie.getName()), _gradeToSign(copie.getGradeTosign()), _gradeToExec(copie.getGradeToExec())
{
	*this = copie;
}

Form& Form::operator=(Form const &copie)
{
	if (this != &copie)
	{
		_signed = copie.isSigned();
	}
	return *this;
}

Form::~Form()
{

}

const std::string Form::getName() const
{
	return _name;
}

int Form::getGradeTosign() const
{
	return _gradeToSign;
}

int Form::getGradeToExec() const
{
	return _gradeToExec;
}

bool Form::isSigned() const
{
	return _signed;
}

void Form::beSigned(Bureaucrat &one)
{
	if (one.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade that has been set is too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade that has been set is too low.");
}

const char* Form::NotSignException::what() const throw()
{
	return ("The Form is not signed or the executor have a grade too low to execute it.");
}

bool Form::checkExec(Bureaucrat const & executor) const
{
	if (_signed && executor.getGrade() <= _gradeToExec)
		return true;
	return false;
}

std::ostream& operator<<(std::ostream &flux, Form const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}