#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0)
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, const int gts, const int gte) : _name(name), _gradeToSign(gts), _gradeToExec(gte)
{
	_signed = false;
	if (_gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copie) : _name(copie.getName()), _gradeToSign(copie.getGradeTosign()), _gradeToExec(copie.getGradeToExec())
{
	_signed = copie.isSigned();
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &copie)
{
	if (this != &copie)
	{
		_signed = copie.isSigned();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

const std::string RobotomyRequestForm::getName() const
{
	return _name;
}

int RobotomyRequestForm::getGradeTosign() const
{
	return _gradeToSign;
}

int RobotomyRequestForm::getGradeToExec() const
{
	return _gradeToExec;
}

bool RobotomyRequestForm::isSigned() const
{
	return _signed;
}

void RobotomyRequestForm::beSigned(Bureaucrat &one)
{
	if (one.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw RobotomyRequestForm::GradeTooLowException();
}

const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

std::ostream& operator<<(std::ostream &flux, RobotomyRequestForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}