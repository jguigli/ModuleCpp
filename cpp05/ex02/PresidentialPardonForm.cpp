#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _name("Default"), _signed(false), _gradeToSign(0), _gradeToExec(0)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, const int gts, const int gte) : _name(name), _gradeToSign(gts), _gradeToExec(gte)
{
	_signed = false;
	if (_gradeToSign > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copie) : _name(copie.getName()), _gradeToSign(copie.getGradeTosign()), _gradeToExec(copie.getGradeToExec())
{
	_signed = copie.isSigned();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copie)
{
	if (this != &copie)
	{
		_signed = copie.isSigned();
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

const std::string PresidentialPardonForm::getName() const
{
	return _name;
}

int PresidentialPardonForm::getGradeTosign() const
{
	return _gradeToSign;
}

int PresidentialPardonForm::getGradeToExec() const
{
	return _gradeToExec;
}

bool PresidentialPardonForm::isSigned() const
{
	return _signed;
}

void PresidentialPardonForm::beSigned(Bureaucrat &one)
{
	if (one.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw PresidentialPardonForm::GradeTooLowException();
}

const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

std::ostream& operator<<(std::ostream &flux, PresidentialPardonForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}