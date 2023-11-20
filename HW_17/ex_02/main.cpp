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
    contacts.PrintContacts(true);
    contacts.UnblockPerson("Radka");
    contacts.PrintContacts(true);
}