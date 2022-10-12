#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& copie)
{
	_grade = copie.getGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &copie)
{
	if (this != &copie)
	{
		_grade = copie.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::addGrade(int value)
{
	_grade -= value;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade(int value)
{
	_grade += value;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

std::ostream& operator<<(std::ostream &flux, Bureaucrat const& b)
{
	flux << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (flux);
}