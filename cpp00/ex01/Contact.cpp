#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

std::string const &Contact::getFirstname(void) const
{
    return this->firstname;
}
std::string const &Contact::getLastname(void) const
{
    return this->lastname;
}
std::string const &Contact::getNickname(void) const
{
    return this->nickname;
}
std::string const &Contact::getNumber(void) const
{
    return this->phonenumber;
}
std::string const &Contact::getDarkestsecret(void) const
{
    return this->darkestsecret;
}
void    Contact::setFirstname(std::string const &line)
{
    this->firstname = line;
}
void    Contact::setLastname(std::string const &line)
{
    this->lastname = line;
}
void    Contact::setNickname(std::string const &line)
{
    this->nickname = line;
}
void    Contact::setNumber(std::string const &line)
{
    this->phonenumber = line;
}
void    Contact::setDarkestsecret(std::string const &line)
{
    this->darkestsecret = line;
}