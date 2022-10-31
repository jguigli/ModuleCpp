#include "Bureaucrat.hpp"

int main()
{

	try
	{
		Bureaucrat one("Fred", 50);
		Form formone("Dossier Sogipec", 5, 5);
		Form formtwo(formone);

		std::cout << one << std::endl;
		one.addGrade(5);
		std::cout << one << std::endl;
		std::cout << formone << std::endl;
		formone.beSigned(one);
		one.signForm(formone);

		one.addGrade(5);
		std::cout << one << std::endl;
		std::cout << formtwo << std::endl;
		formtwo.beSigned(one);
		one.signForm(formtwo);
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