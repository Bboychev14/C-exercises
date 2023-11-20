#pragma once
#include <map>
#include <string>
#include <set>

class PhoneBook
{
public:
    using PhoneNumber = std::string;
    using ContactName = std::string;

    void AddContact(const ContactName& contactName, const PhoneNumber phoneNumber);

    PhoneNumber GetNumber(const ContactName& name) const;

    void BlockPerson(const ContactName& name);

    void UnblockPerson(const ContactName& name);

private:
    static const std::string MISSING_CONTACT_STR;
    using ContactsContainer = std::map<ContactName, PhoneNumber>;

    ContactsContainer m_contacts;
    std::set<ContactName> blacklist;
};