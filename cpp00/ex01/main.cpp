#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	repo;
	int			loop = 1;
	std::string	line;
	
	std::cout << "Bienvenue dans votre repertoire" << std::endl;
	while (loop)
	{
		std::cout << "Que souhaitez vous faire ? (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, line);
		if (line == "ADD")
		{
			repo.setContact();
			if (std::cin.eof())
        		loop = 0;
		}
		else if (line == "SEARCH")
		{
			repo.displayContact();
			repo.chooseContact();
			if (std::cin.eof())
        		loop = 0;
		}
		else if (line == "EXIT")
			loop = 0;
		else if (std::cin.eof())
			loop = 0;
		else
			std::cout << "Mauvaise commande" << std::endl;
	}
	return 0;
}