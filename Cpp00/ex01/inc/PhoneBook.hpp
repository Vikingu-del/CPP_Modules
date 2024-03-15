#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "contact_utils.hpp"
#include <iomanip>

class	PhoneBook {
private:
	static const int	_maxContacts = 8;
	Contact				_contacts[_maxContacts];
	std::size_t			_currentContact, _oldestContact;
	void				_printHeader() const;
	void				_printContactList(const Contact& contact);
	void				_printContactInfo(const Contact& contact);
	std::string			_truncate(const std::string& str);
public:
	PhoneBook();
	// void				set_index(_contacts);
	void				display();
	void    			display(int index);
	void				setContact(const std::string& FirstName,
									const std::string& LastName,
									const std::string& NickName,
									const std::string& PhoneNumber,
									const std::string& DarkestSecret);
};

#endif