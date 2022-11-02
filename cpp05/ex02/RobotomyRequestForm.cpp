#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copie) : Form("RobotomyRequestForm", 72, 45), _target(copie.getTarget())
{
	*this = copie;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &copie)
{
	if (this != &copie)
	{
		_target = copie.getTarget();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (checkExec(executor))
	{
		std::cout << "* drill sound heard *\n";
		srand((unsigned)time(0));
		if ((std::rand() % 2) % 2)
			std::cout << _target << " has been robotomized." << std::endl;
		else
			std::cout << "Operation of robotomization failed." << std::endl;
	}
	else
		throw RobotomyRequestForm::NotSignException();
}

std::ostream& operator<<(std::ostream &flux, RobotomyRequestForm const& b)
{
	flux << b.getName() << " form, need grade " << b.getGradeTosign() << " to be signed, and grade " << b.getGradeToExec() << " to execute.";
	return (flux);
}