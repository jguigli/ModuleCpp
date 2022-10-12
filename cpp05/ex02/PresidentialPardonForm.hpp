#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat;
class PresidentialPardonForm : public Form
{
	public:

	PresidentialPardonForm();
	PresidentialPardonForm(const std::string name, const int gts, const int gte);
	PresidentialPardonForm(PresidentialPardonForm const& copie);
	virtual PresidentialPardonForm& operator=(PresidentialPardonForm const &copie);
	virtual ~PresidentialPardonForm();

	virtual const std::string getName() const;
	virtual int getGradeTosign() const;
	virtual int getGradeToExec() const;
	virtual bool isSigned() const;
	virtual void beSigned(Bureaucrat &one);
	

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