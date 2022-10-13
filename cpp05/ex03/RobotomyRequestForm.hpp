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

	RobotomyRequestForm(std::string &target);
	RobotomyRequestForm(RobotomyRequestForm const& copie);
	virtual RobotomyRequestForm& operator=(RobotomyRequestForm const &copie);
	virtual ~RobotomyRequestForm();

	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;

	private:

	RobotomyRequestForm();

	std::string _target;

};

std::ostream& operator<<(std::ostream &flux, Form const& b);

#endif