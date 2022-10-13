#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class Intern
{

	public:

	Intern();
	~Intern();

	Form* makeForm(std::string form, std::string targetform);

};

#endif