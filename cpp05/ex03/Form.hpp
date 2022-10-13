#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	public:

	Form(const std::string name, const int gts, const int gte);
	Form(Form const& copie);
	virtual Form& operator=(Form const &copie);
	virtual ~Form();

	const std::string getName() const;
	int getGradeTosign() const;
	int getGradeToExec() const;
	bool isSigned() const;
	void beSigned(Bureaucrat &one);
	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual bool checkExec(Bureaucrat const & executor) const;
	

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
	class NotSignException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	private:

	Form();

	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExec;

};

std::ostream& operator<<(std::ostream &flux, Form const& b);

#endif