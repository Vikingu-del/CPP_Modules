#include "Contact.hpp"

// Default constructor definition
Contact::Contact() : _firstName("empty"),
						_lastName("empty"),
						_nickName("empty"),
    					_phoneNumber("empty"),
						_darkestSecret("empty"),
						_index(0) {}

// Parameterized constructor definition
Contact::Contact(const std::string& FirstName,
					const std::string& LastName,
					const std::string& NickName,
    				const std::string& PhoneNumber,
					const std::string& DarkestSecret,
					const std::size_t& index) : _firstName(FirstName),
												_lastName(LastName),
												_nickName(NickName),
    											_phoneNumber(PhoneNumber),
												_darkestSecret(DarkestSecret),
												_index(index) {}

void Contact::setField(std::string& Field, std::string& Value) { Field = Value; }
const std::string& Contact::getFirstName( void ) const { return (this->_firstName); }
const std::string& Contact::getLastName( void ) const { return (this->_lastName); }
const std::string& Contact::getNickName( void ) const { return (this->_nickName); }
const std::string& Contact::getPhoneNumber( void ) const { return (this->_phoneNumber); }
const std::string& Contact::getDarkestSecret( void ) const { return (this->_darkestSecret); }
const std::size_t& Contact::getIndex( void ) const { return (this->_index); }
