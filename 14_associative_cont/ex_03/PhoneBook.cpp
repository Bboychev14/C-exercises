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

void PhoneBook::PrintContacts(bool printBlocked)
{
    for (const auto& pair : m_contacts)
    {
        std::cout << pair.first << std::endl;
    }

    if (printBlocked)
    {
        std::cout << "Blocked contacts: " << std::endl;
        for (const auto& el : blacklist)
        {
            std::cout << el << std::endl;
        }
    }
}

void PhoneBook::MergeTwoPhoneBooks(PhoneBook& secondPhoneBook)
{
    for (const auto& tempContact : secondPhoneBook.m_contacts)
    {
        if (m_contacts.find(tempContact.first) == m_contacts.end())
        {
            m_contacts[tempContact.first] = tempContact.second;
        }
    }

    for (const auto& tempContactName : secondPhoneBook.blacklist)
    {
        blacklist.insert(tempContactName);
    }
}