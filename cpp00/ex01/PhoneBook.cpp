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

int PhoneBook::level = 0;

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
    std::string str;

    if (this->index > level)
        this->level = this->index;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Firstname" << "|";
    std::cout << std::setw(10) << "Lastname" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < level; i++)
    {
        std::cout << std::setw(10) << i << "|";;
        str = this->contacts[i].getFirstname();
        if (str.size() > 10)
            std::cout << str.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << str << "|";
        str = this->contacts[i].getLastname();
        if (str.size() > 10)
            std::cout << str.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << str << "|";
        str = this->contacts[i].getNickname();
        if (str.size() > 10)
            std::cout << str.substr(0, 9) << "." << std::endl;
        else
            std::cout << std::setw(10) << str << std::endl;
    }
}

void    PhoneBook::chooseContact(void) const
{
    int         indexpb = 0;
    std::string str;

    std::cout << "\nVeuillez entrer l'index du contact que vous souhaitez afficher\n";
    std::getline(std::cin, str);
    std::stringstream(str) >> indexpb;
    if (indexpb <= this->level && indexpb > 0)
    {
        std::cout << this->contacts[indexpb].getFirstname() << '\n';
        std::cout << this->contacts[indexpb].getLastname() << '\n';
        std::cout << this->contacts[indexpb].getNickname() << '\n';
        std::cout << this->contacts[indexpb].getNumber() << '\n';
        std::cout << this->contacts[indexpb].getDarkestsecret() << std::endl;
    }
    else
        std::cout << "Index inccorect" << std::endl;
}