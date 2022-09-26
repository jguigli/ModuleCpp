#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class PhoneBook {

    public:

    void    setContact(void);
    void    displayContact(void) const;
    void    chooseContact(void) const;
    int     getLevel(void);
    int     have_alpha(std::string str);

    PhoneBook(void);
    ~PhoneBook(void);

    private :

    int     index;
    int     nbInfo;
    static int  level;
    Contact contacts[8];
};

#endif