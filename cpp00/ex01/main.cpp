#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	repo;
	char		buffer[100];
	int			loop = 1;
	int			index = 0;

	std::cout << "Bienvenue dans votre repertoire" << std::endl;
	while (loop)
	{
		std::cout << "Que souhaitez vous faire ? (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> buffer;
		if (!std::strcmp(buffer, "ADD"))
		{
			if (index == 7)
				index = 0;
			std::cout << "Veuillez entrer le prenom du contact\n";
			std::cin >> repo.contacts[index].firstname;
			std::cout << "Veuillez entrer le nom du contact\n";
			std::cin >> repo.contacts[index].lastname;
			std::cout << "Veuillez entrer le surnom du contact\n";
			std::cin >> repo.contacts[index].nickname;
			std::cout << "Veuillez entrer le numero du contact\n";
			std::cin >> repo.contacts[index].phonenumber;
			std::cout << "Veuillez entrer le secret du contact\n";
			std::cin >> repo.contacts[index].darkestsecret;
			std::cout << "Contact enregistre avec succes" << std::endl;
			index++;
		}
		else if (!std::strcmp(buffer, "SEARCH"))
		{
			std::cout << "Index | Nom | Prenom | Surnom ";
			for (int i = 0; i < 8; i++)
			{
				std::cout << i << repo.contacts[i].lastname << repo.contacts[i].firstname << repo.contacts[i].nickname << std::endl;
			}
		}
		else if (!std::strcmp(buffer, "EXIT"))
		{
			loop = 0;
		}
		else
			std::cout << "Mauvaise commande" << buffer << std::endl;
	}
	return 0;
}