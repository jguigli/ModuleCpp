#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	try
	{
		Bureaucrat one("Fred", 5);
		ShrubberyCreationForm ok("jean paul");

		ok.beSigned(one);
		ok.execute(one);
		std::cout << one << std::endl;
		one.addGrade(1);
		std::cout << one << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat two("phil", 24);
		Bureaucrat three("pierre", 8);
		PresidentialPardonForm ok("sarko");

		ok.beSigned(two);
		std::cout << two << std::endl;
		three.addGrade(7);
		std::cout << three << std::endl;
		ok.execute(three);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}