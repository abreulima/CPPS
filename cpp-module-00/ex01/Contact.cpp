#include "Contact.hpp"

Contact Contact::CreateContact
(        
    std::string _firstName, 
    std::string _lastName, 
    std::string _nickname, 
    std::string _phoneNumber, 
    std::string _darkestSecret
)
{
    Contact c;
    
    c.firstName = _firstName; 
    c.lastName =_lastName;
    c.nickname = _nickname;
    c.phoneNumber =_phoneNumber;
    c.darkestSecret= _darkestSecret;

    return c;
}