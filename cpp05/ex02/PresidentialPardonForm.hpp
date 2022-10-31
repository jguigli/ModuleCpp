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

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& copie);
	virtual PresidentialPardonForm& operator=(PresidentialPardonForm const &copie);
	virtual ~PresidentialPardonForm();

	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;

	private:

	PresidentialPardonForm();

	std::string _target;

};

std::ostream& operator<<(std::ostream &flux, Form const& b);

#endif