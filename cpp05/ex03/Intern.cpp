#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Form* Intern::makeForm(std::string form, std::string targetform)
{
	std::string formarray[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int index = -1;

	for (int i = 0; i < 3; i++)
	{
		if (formarray[i] == form)
		index = i;
	}
	switch (index)
	{
	case 0:
		return (new PresidentialPardonForm(targetform));
		break;
	case 1:
		return (new RobotomyRequestForm(targetform));
		break;
	case 2:
		return (new ShrubberyCreationForm(targetform));
		break;
	default:
		break;
	}
}