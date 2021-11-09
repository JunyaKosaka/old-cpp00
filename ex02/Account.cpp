#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit) {
	this->_accountIndex = Account::getNbAccounts();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex <<";amount:" << this->_amount << ";created\n";
	Account::_totalAmount += this->_amount;
	Account::_nbAccounts += 1;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
	Account::_nbAccounts -= 1;
}

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount()  \
		<< ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
	// std::cout << "amount" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) { // index amount deposits nb_deposits:
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << ";deposits:" << deposit << ";amount:" << this->_amount << \
		";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount < withdrawal) {
		std::cout <<"refused" << std::endl;
		return 0;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";amount:" << this->_amount << \
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return 1;
}

int		Account::checkAmount( void ) const {
	return _totalAmount;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount \
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	struct tm tm;
	time_t t = time(NULL);
	localtime_r(&t, &tm);
	std::cout << "[" << tm.tm_year + 1900 << tm.tm_mon + 1 << tm.tm_mday << \
		"_" << tm.tm_hour << tm.tm_min << tm.tm_sec << "]";
}

Account::Account(void) {
	this->_accountIndex = Account::getNbAccounts();
	Account::_nbAccounts += 1;
}
