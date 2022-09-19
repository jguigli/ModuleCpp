#include "Contact.hpp"
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

    public:

	Contact contacts[8];
    PhoneBook(void);
    ~PhoneBook(void);

};

#endif