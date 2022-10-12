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

	Form();
	Form(const std::string name, const int gts, const int gte);
	Form(Form const& copie);
	virtual Form& operator=(Form const &copie);
	virtual ~Form();

	virtual const std::string getName() const = 0;
	virtual int getGradeTosign() const = 0;
	virtual int getGradeToExec() const = 0;
	virtual bool isSigned() const = 0;
	virtual void beSigned(Bureaucrat &one) = 0;
	

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
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExec;

};

std::ostream& operator<<(std::ostream &flux, Form const& b);

#endif