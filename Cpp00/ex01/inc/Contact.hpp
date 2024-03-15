#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact {
private:
	std::string _firstName, _lastName, _nickName, _phoneNumber, _darkestSecret;
	std::size_t _index;
public:
	Contact ();
	Contact(const std::string& FirstName, const std::string& LastName, const std::string &NickName, const std::string& PhoneNumber, const std::string& DarkestSecret, const std::size_t& index);
	void 		setField(std::string& Field, std::string& Value);
	const 		std::string &getFirstName() const;
	const 		std::string &getLastName() const;
	const 		std::string &getNickName() const;
	const 		std::string &getPhoneNumber() const;
	const 		std::string &getDarkestSecret() const;
	const 		std::size_t &getIndex() const;
};

#endif