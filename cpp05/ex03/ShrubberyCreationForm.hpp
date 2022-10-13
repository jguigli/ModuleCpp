#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <ostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
	public:

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& copie);
	virtual ShrubberyCreationForm& operator=(ShrubberyCreationForm const &copie);
	virtual ~ShrubberyCreationForm();

	virtual void execute(Bureaucrat const & executor) const;
	std::string getTarget() const;

	private:

	ShrubberyCreationForm();

	std::string _target;

};

std::ostream& operator<<(std::ostream &flux, Form const& b);

#endif