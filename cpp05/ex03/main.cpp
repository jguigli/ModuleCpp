#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	try
	{
		Bureaucrat one("Fred", 5);
		Intern two;
		Form *ptr;

		std::cout << one << std::endl;
		ptr = two.makeForm("shrubbery creation", "New form by intern");
		ptr->beSigned(one);
		ptr->execute(one);
		std::cout << *ptr << std::endl;
		one.addGrade(1);
		std::cout << one << std::endl;
		delete ptr;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	try
	{
		Bureaucrat one("Fred", 44);
		Intern two;
		Form *ptr;

		std::cout << one << std::endl;
		ptr = two.makeForm("robotomy request", "New form by intern");
		ptr->beSigned(one);
		ptr->execute(one);
		std::cout << *ptr << std::endl;
		one.addGrade(20);
		std::cout << one << std::endl;
		delete ptr;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}