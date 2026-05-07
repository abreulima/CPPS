#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>
#include <cstdlib>

bool isStringNumber(const std::string& str)
{
    if (str.empty())
        return false;
    
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}

int main()
{
    PhoneBook b = PhoneBook();
    std::string cmd = "";
    
    while (cmd.compare("EXIT") != 0)
    {
        
        std::cout << "\tWrite ADD to add a contact." << std::endl;
        std::cout << "\tWrite SEARCH to search contact." << std::endl;
        std::cout << "\tWrite EXIT to exit the application." << std::endl;
        std::cout << "\tThe Agenda is limited to 8 contacts," << std::endl;
        std::cout << "\tadding a new contact, will replace the oldest one." << std::endl;
        std::cout << std::endl;
        
        std::getline(std::cin, cmd);
        
        if (cmd.compare("ADD") == 0)
        {
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNumber;
            std::string darkestSecret;
            
            std::cout << "Adding contact" << std::endl;
            std::cout << "All fields must be filled!" << std::endl;
            
            std::cout << "Contact first name." << std::endl;
            std::getline(std::cin, firstName);
            if (firstName.empty())
            {
                std::cout << "First name can't be empty.\nGoing to main menu...";
                continue ;
            }
            
            std::cout << "Contact last name." << std::endl;
            std::getline(std::cin, lastName);
            if (lastName.empty())
            {
                std::cout << "Last name can't be empty.\nGoing to main menu...";
                continue ;
            }
            
            std::cout << "Contact nickname." << std::endl;
            std::getline(std::cin, nickName);
            if (nickName.empty())
            {
                std::cout << "Nickname can't be empty.\nGoing to main menu...";
                continue ;
            }
            
            std::cout << "Contact phonenumber." << std::endl;
            std::getline(std::cin, phoneNumber);
            if (phoneNumber.empty())
            {
                std::cout << "Phone number can't be empty.\nGoing to main menu...";
                continue ;
            }
            if (!isStringNumber(phoneNumber))
            {
                std::cout << "Phone number must be numbers" << std::endl;
                continue ;
            }
            
            std::cout << "Contact darkest secret." << std::endl;
            std::getline(std::cin, darkestSecret);
            if (darkestSecret.empty())
            {
                std::cout << "Darkest secret can't be empty.\nGoing to main menu...";
                continue ;
            }
            
            Contact c = Contact::CreateContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            b.Add(c);
        }
        
        else if (cmd.compare("SEARCH") == 0)
        {
            b.Search();
            std::cout << "To show more information, type the contact's index." << std::endl;
            std::string index = "";
            std::getline(std::cin, index);
            
            std::cout << std::endl;
            
            if (!isStringNumber(index))
            {
                std::cout << "Only numbers allowed!" << std::endl;
                continue ;
            }
            
            int contact;
            contact = atoi(index.c_str());
            
            if (contact > b.GetNumContacts() || contact < 1)
            {
                std::cout << "Index outside allowed range" << std::endl;
                continue ;
            }
            
            Contact *c = b.GetContactById(contact - 1);
            if (c)
            {
                std::cout << c->firstName << " " << c->lastName << std::endl;
                std::cout << "Nickname: " << c->nickname << std::endl;
                std::cout << "Darkest Secret: " << c->darkestSecret << std::endl;
            }
        }
    }
}