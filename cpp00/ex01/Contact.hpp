#ifndef CONTACT_H
# define CONTACT_H

class Contact {

    public:

    char    firstname[100];
    char    lastname[100];
    char    nickname[100];
    char    phonenumber[100];
    char    darkestsecret[100];
    Contact(void);
    ~Contact(void);

};

#endif