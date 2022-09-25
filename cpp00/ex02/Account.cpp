#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "created" << std::endl;
	return;
}

Account::Account(void)
{
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "created" << std::endl;
	return;
}

Account::~Account(void)
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "closed" << std::endl;
	return;
}

void	Account::_displayTimestamp( void )
{
	std::time_t timet;
	std::time(&timet);
	std::tm *result = std::localtime(&timet);

	std::cout << std::setfill('0') << '['
	<< std::setw(2) << result->tm_year + 1900
	<< std::setw(2) << result->tm_mon + 1
	<< std::setw(2) << result->tm_mday << '_'
	<< std::setw(2) << result->tm_hour
	<< std::setw(2) << result->tm_min
	<< std::setw(2) << result->tm_sec << "] ";
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "account:" << Account::_nbAccounts << ';';
	std::cout << "total:" << Account::_totalAmount << ';';
	std::cout << "deposits:" << Account::_totalNbDeposits << ';';
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals<< ';' << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "deposit:" << deposit << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "nb_deposits:" << this->_nbDeposits << ';' << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ';';
		std::cout << "amount:" << this->_amount << ';';
		std::cout << "nb_withdrawals:" << this->_nbDeposits << ';' << std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount > 0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "deposits:" << this->_nbDeposits << ';';
	std::cout << "withdrawals:" << this->_nbWithdrawals << ';' << std::endl;
}