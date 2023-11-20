#include "PhoneBook.h"

const std::string PhoneBook::MISSING_CONTACT_STR = "missing";

void PhoneBook::AddContact(const ContactName& contactName, const PhoneNumber phoneNumber)
{
    m_contacts[contactName] = phoneNumber;
}

PhoneBook::PhoneNumber PhoneBook::GetNumber(const ContactName& name) const
{
    auto iter = m_contacts.find(name);
    return iter == m_contacts.end() ? MISSING_CONTACT_STR : iter->second;
}

void PhoneBook::BlockPerson(const ContactName& name)
{
    blacklist.insert(name);
}

void PhoneBook::UnblockPerson(const ContactName& name)
{
    blacklist.erase(name);
}