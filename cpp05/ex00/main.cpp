#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat one("fred", 6);

		std::cout << one << std::endl;
		one.addGrade(5);
		std::cout << one << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat two("phil", 151);
		std::cout << two << std::endl;
		two.addGrade(7);
		std::cout << two << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}