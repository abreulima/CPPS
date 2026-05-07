#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
        
    static Contact CreateContact
    (
        std::string _firstName, 
        std::string _lastName, 
        std::string _nickname, 
        std::string _phoneNumber, 
        std::string _darkestSecret
    );
};

#endif