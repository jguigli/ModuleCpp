#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	public:

	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const& copie);
	Bureaucrat& operator=(Bureaucrat const &copie);
	~Bureaucrat();

	const std::string getName() const;
	int getGrade() const;
	void addGrade(int value);
	void decreaseGrade(int value);
	void signForm(Form & form);
	bool executeForm(Form const & form) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:

	const std::string _name;
	int _grade;

};

std::ostream& operator<<(std::ostream &flux, Bureaucrat const& b);

#endif