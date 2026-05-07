#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  private:
    int numContacts;
    Contact contacts[8];
    bool ParseField(std::string field);
    std::string ShortString(std::string s);
  public:
    PhoneBook();
    void Search();
    void Add(Contact contact);
    int GetNumContacts();
    Contact* GetContactById(int id);
};

#endif