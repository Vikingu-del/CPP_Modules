#include "PhoneBook.hpp"

void	PhoneBook::_printHeader() const {
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

void	PhoneBook::_printContactList(const Contact& contact) {
    std::cout << std::setw(10) << std::right << _truncate(contact.getFirstName()) << "|"; 
    std::cout << std::setw(10) << std::right << _truncate(contact.getLastName()) << "|";
    std::cout << std::setw(10) << std::right << _truncate(contact.getNickName()) << std::endl;
}

void	PhoneBook::_printContactInfo(const Contact& contact) {
    std::cout << "First Name: " << contact.getFirstName() << std::endl; 
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nick Name: " << contact.getNickName() << std::endl;
    std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

// truncating string longer than 10 characters
std::string PhoneBook::_truncate(const std::string& str) {
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

// initialising constructor
PhoneBook::PhoneBook() : _currentContact(0), _oldestContact(0) {}

void	PhoneBook::setContact(const std::string& FirstName,
                                const std::string& LastName,
                                const std::string& NickName,
                                const std::string& PhoneNumber,
                                const std::string& DarkestSecret) {
    if (this->_currentContact < this->_maxContacts) {
        this->_contacts[_currentContact] = Contact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret, _currentContact);
        this->_currentContact++;
    } else {
        this->_currentContact = this->_oldestContact;
        this->_oldestContact++;
        if (this->_oldestContact == this->_maxContacts)
            this->_oldestContact = 0;
        this->_contacts[this->_currentContact] = Contact(FirstName, LastName, NickName, PhoneNumber, DarkestSecret, _currentContact);
        this->_currentContact++;
    }
}

// displaying contacts without input
void	PhoneBook::display() {
    this->_printHeader();
    for (std::size_t i = 0; i < this->_maxContacts; i++) {
        std::cout << std::setw(10) << std::right << i << "|";
        this->_printContactList(this->_contacts[i]);
    }
}

// displaying contact with input
void    PhoneBook::display(int index) {
    if (index < 0 || index > 7)
        std::cout << "Invalid index" << std::endl;
    else if (this->_contacts[index].getFirstName() == "empty")
        std::cout << "Contact doesn't exist" << std::endl;
    else 
        this->_printContactInfo(this->_contacts[index]);
}
