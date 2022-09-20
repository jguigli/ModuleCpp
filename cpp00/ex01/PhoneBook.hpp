#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {

    public:

    void    setContact(void);
    void    displayContact(void) const;
    PhoneBook(void);
    ~PhoneBook(void);

    private :

    int     index;
    Contact contacts[8];
};

#endif