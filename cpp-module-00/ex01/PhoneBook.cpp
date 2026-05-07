#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook()
{
    numContacts = 0;
}

std::string PhoneBook::ShortString(std::string s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

void PhoneBook::Add(Contact contact)
{
    if (numContacts >= 8)
    {
        std::cout << "Limit exceeded. Replacing oldest contact..." << std::endl;
        for (int i = 0; i < 7; i++)
            contacts[i] = contacts[i + 1];   
        contacts[7] = contact;
    }
    else
    {
        contacts[numContacts] = contact;
        numContacts++;
    }
}

void PhoneBook::Search()
{
    
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|";
    std::cout << std::endl;
    
    for (int i = 0; i < numContacts; i++)
    {   
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << ShortString(contacts[i].firstName) << "|";
        std::cout << std::setw(10) << ShortString(contacts[i].lastName) << "|";
        std::cout << std::setw(10) << ShortString(contacts[i].nickname) << "|";
        std::cout << std::endl;
    }
}

Contact* PhoneBook::GetContactById(int index)
{
    if (index >= 0 && index < numContacts)
        return &contacts[index];

    return NULL;
}

int PhoneBook::GetNumContacts()
{
    return numContacts;
}
