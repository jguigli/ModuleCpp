#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat;
class RobotomyRequestForm : public Form
{
	public:

	RobotomyRequestForm();
	RobotomyRequestForm(const std::string name, const int gts, const int gte);
	RobotomyRequestForm(RobotomyRequestForm const& copie);
	virtual RobotomyRequestForm& operator=(RobotomyRequestForm const &copie);
	virtual ~RobotomyRequestForm();

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