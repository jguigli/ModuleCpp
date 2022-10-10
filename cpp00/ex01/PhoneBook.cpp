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

int PhoneBook::have_alpha(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (std::isalpha(str[i]) || str[i] == '\0')
            return (0);
        i++;
    }
    return (1);
}

void    PhoneBook::setContact(void)
{
    std::string	line;
    int indexinfo = 0;
    int loop = 1;

    if (this->index == 8)
        this->index = 0;
    while (loop)
    {
        if (indexinfo == 0)
        {
            std::cout << "Veuillez entrer le prenom du contact\n";
            std::getline(std::cin, line);
            if (line != "")
            {    
                this->contacts[this->index].setFirstname(line);
                indexinfo++;
            }
        }
        else if (indexinfo== 1)
        {
            std::cout << "Veuillez entrer le nom du contact\n";
            std::getline(std::cin, line);
            if (line != "")
            {    
                this->contacts[this->index].setLastname(line);
                indexinfo++;
            }
        }
        else if (indexinfo == 2)
        {
            std::cout << "Veuillez entrer le surnom du contact\n";
            std::getline(std::cin, line);
            if (line != "")
            {    
                this->contacts[this->index].setNickname(line);
                indexinfo++;
            }
        }
        else if (indexinfo == 3)
        {
            std::cout << "Veuillez entrer le numero du contact\n";
            std::getline(std::cin, line);
            if (line != "")
            {    
                this->contacts[this->index].setNumber(line);
                indexinfo++;
            }
        }
        else if (indexinfo == 4)
        {
            std::cout << "Veuillez entrer le secret du contact\n";
            std::getline(std::cin, line);
            if (line != "")
            {
                this->contacts[this->index].setDarkestsecret(line);
                loop = 0;
            }
        }
        if (std::cin.eof())
            return;
    }
    std::cout << "Contact enregistre avec succes" << std::endl;
    this->index += 1;
}

void    PhoneBook::displayContact(void) const
{
    std::string str;

    if (this->index > this->level)
        this->level = this->index;
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Firstname" << "|";
    std::cout << std::setw(10) << "Lastname" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < this->level; i++)
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

void    PhoneBook::chooseContact(void)
{
    int         indexpb = 0;
    std::string str;

    std::cout << "\nVeuillez entrer l'index du contact que vous souhaitez afficher\n";
    std::getline(std::cin, str);
    if (str == "")
        return;
    std::stringstream(str) >> indexpb;
    if (indexpb <= this->level - 1 && indexpb >= 0 && this->have_alpha(str))
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

int PhoneBook::getLevel(void)
{
    return (this->level);
}
