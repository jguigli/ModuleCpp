#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const int gts, const int gte) : _name(name), _gradeToSign(gts), _gradeToExec(gte)
{
	_signed = false;
	if (_gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copie) : _name(copie.getName()), _gradeToSign(copie.getGradeTosign()), _gradeToExec(copie.getGradeToExec())
{
	_signed = copie.isSigned();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copie)
{
	if (this != &copie)
	{
		_signed = copie.isSigned();
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const std::string ShrubberyCreationForm::getName() const
{
	return _name;
}

int ShrubberyCreationForm::getGradeTosign() const
{
	return _gradeToSign;
}

int ShrubberyCreationForm::getGradeToExec() const
{
	return _gradeToExec;
}

bool ShrubberyCreationForm::isSigned() const
{
	return _signed;
}

void ShrubberyCreationForm::beSigned(Bureaucrat &one)
{
	if (one.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}

const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

std::ostream& operator<<(std::ostream &flux, ShrubberyCreationForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}