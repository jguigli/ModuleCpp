#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact {

    public:

    Contact(void);
    ~Contact(void);
    std::string const &getFirstname(void) const;
    std::string const &getLastname(void) const;
    std::string const &getNickname(void) const;
    std::string const &getNumber(void) const;
    std::string const &getDarkestsecret(void) const;
    void    setFirstname(std::string const &line);
    void    setLastname(std::string const &line);
    void    setNickname(std::string const &line);
    void    setNumber(std::string const &line);
    void    setDarkestsecret(std::string const &line);
    

    private :
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

};

#endif