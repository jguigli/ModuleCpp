#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copie) : Form("PresidentialPardonForm", 25, 5), _target(copie.getTarget())
{
	*this = copie;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copie)
{
	if (this != &copie)
	{
		_target = copie.getTarget();
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (checkExec(executor))
	{
		std::cout << _target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
	}
	else
		throw PresidentialPardonForm::NotSignException();
}

std::ostream& operator<<(std::ostream &flux, PresidentialPardonForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}