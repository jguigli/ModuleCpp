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
	*this = copie;
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

void Bureaucrat::signForm(Form & form)
{
	if (form.isSigned())
		std::cout << _name << " signed " << form.getName() << std::endl;
	else
		std::cout << _name << " couldn't signed " << form.getName() << "because he don't have the grade to" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low.");
}

bool Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
		return true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
}

std::ostream& operator<<(std::ostream &flux, Bureaucrat const& b)
{
	flux << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (flux);
}