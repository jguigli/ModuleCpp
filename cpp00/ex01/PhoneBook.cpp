#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void    PhoneBook::setContact(void)
{
    std::string	line;

    if (this->index == 7)
        this->index = 0;
    std::cout << "Veuillez entrer le prenom du contact\n";
    std::getline(std::cin, line);
    if (std::cin.eof())
        return;
    this->contacts[this->index].setFirstname(line);
    std::cout << "Veuillez entrer le nom du contact\n";
    std::getline(std::cin, line);
    if (std::cin.eof())
        return;
    this->contacts[this->index].setLastname(line);
    std::cout << "Veuillez entrer le surnom du contact\n";
    std::getline(std::cin, line);
    if (std::cin.eof())
        return;
    this->contacts[this->index].setNickname(line);
    std::cout << "Veuillez entrer le numero du contact\n";
    std::getline(std::cin, line);
    if (std::cin.eof())
        return;
    this->contacts[this->index].setNumber(line);
    std::cout << "Veuillez entrer le secret du contact\n";
    std::getline(std::cin, line);
    if (std::cin.eof())
        return;
    this->contacts[this->index].setDarkestsecret(line);
    std::cout << "Contact enregistre avec succes" << std::endl;
    this->index += 1;
}

void    PhoneBook::displayContact(void) const
{
    static int  level = 0;

    if (this->index > level)
        level == this->index;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Firstname" << "|";
    std::cout << std::setw(10) << "Lastname" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < level; i++)
    {
        std::cout << std::setw(10) << ;
    }
}