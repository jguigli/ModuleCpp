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
    PhoneBook(void);
    ~PhoneBook(void);

    private :

    int     index;
    static int  level;
    Contact contacts[8];
};

#endif