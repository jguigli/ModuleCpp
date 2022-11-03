#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

const char* Intern::FormNotFound::what() const throw()
{
	return ("The Form mentionned in makeForm don't exist.");
}

Form* Intern::makeForm(std::string form, std::string targetform)
{
	std::string formarray[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *ptr[3] = {new PresidentialPardonForm(targetform), new RobotomyRequestForm(targetform), new ShrubberyCreationForm(targetform)};
	Form *retour = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (formarray[i] == form)
			retour = ptr[i];
		else
			delete ptr[i];
	}
	if (retour)
		return retour;
	throw Intern::FormNotFound();
}