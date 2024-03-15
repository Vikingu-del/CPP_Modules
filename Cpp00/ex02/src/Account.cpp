#include "Account.hpp"
#include <iostream>
#include <ctime>

// initialise static members
int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

// constructor
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts),
                                        _amount(initial_deposit),
                                        _nbDeposits(0),
                                        _nbWithdrawals(0) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    // update static members
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

// destructor
Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// Timestamp display function
void   Account::_displayTimestamp(void) {
    std::time_t rawtime;
    char buffer[80];
    std::time(&rawtime);
    std::tm* timeinfo = std::localtime(&rawtime);
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}


// Static public methods
int     Account::getNbAccounts(void) { return (_nbAccounts); }
int     Account::getTotalAmount(void) { return (_totalAmount); }
int     Account::getNbDeposits(void) { return (_totalNbDeposits); }
int     Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus(void) const {
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// non-static public methods
void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits += 1;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this-> _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
    if (withdrawal > this->_amount) {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        this->_totalNbWithdrawals += 1;
        return (true);
    }
}

int     Account::checkAmount(void) const {
    return (this->_amount);
}
