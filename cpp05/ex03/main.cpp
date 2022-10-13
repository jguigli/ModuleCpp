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

	// try
	// {
	// 	Bureaucrat two("phil", 151);
	// 	std::cout << two << std::endl;
	// 	two.addGrade(7);
	// 	std::cout << two << std::endl;
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
}