#include "PhoneBook.h"

int main()
{
    PhoneBook contacts;
    contacts.AddContact("Radka", "01");
    contacts.AddContact("Toni", "02");
    contacts.AddContact("Kolev", "03");
    contacts.AddContact("Ilev", "04");
    contacts.BlockPerson("Radka");
    contacts.BlockPerson("Toni");
//    contacts.PrintContacts(true);
    contacts.UnblockPerson("Radka");
//    contacts.PrintContacts(true);

    PhoneBook contacts2;
    contacts.AddContact("Radka2", "01");
    contacts.AddContact("Toni2", "02");
    contacts.AddContact("Kolev2", "03");
    contacts.AddContact("Ilev2", "04");
    contacts.BlockPerson("Radka2");
    contacts.BlockPerson("Toni2");
//    contacts.PrintContacts(true);
    contacts.UnblockPerson("Radka2");
//    contacts.PrintContacts(true);

    contacts.MergeTwoPhoneBooks(contacts2);
    std::cout << "Merged !!!" << std::endl;
    contacts.PrintContacts(true);
}