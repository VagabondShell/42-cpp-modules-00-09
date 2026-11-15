#include "Account.hpp"
#include <ctime>
#include <cstdio>
#include <iostream>  
#include <ostream>

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account( void ) {
  Account::_displayTimestamp();

  std::cout << "index:" << this->_accountIndex 
    << ";amount:" << this->_amount    
    << ";closed" << std::endl;

  _nbAccounts--;
  _totalAmount -= this->_amount; 
}
void Account::_displayTimestamp( void )
{
  std::time_t rawtime;
  std::tm* timeinfo; 
  rawtime = std::time(NULL);
  timeinfo = std::localtime(&rawtime);
  char buffer[80];
  std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
  std::cout << "[" << buffer << "] ";
}

Account::Account( int initial_deposit )
  : _accountIndex ( _nbAccounts),
  _amount (initial_deposit),
  _nbDeposits (0),
  _nbWithdrawals (0)
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";created" << std::endl;
  _nbAccounts ++;
  _totalAmount += initial_deposit;
}

int Account::getTotalAmount()
{
  return (_totalAmount);
}

int Account::getNbAccounts()
{
  return (_nbAccounts);
}

int Account::getNbDeposits()
{
  return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
  return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
  Account::_displayTimestamp();
  std::cout  << "accounts:" << getNbAccounts() 
    << ";total:" << getTotalAmount() 
    << ";deposits:" << getNbDeposits()
    << ";withdrawals:" << getNbWithdrawals()
    << std::endl;
}

void Account::displayStatus( void ) const
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->_amount;
  _amount += deposit;
  _nbDeposits++;
  std::cout << ";deposit:" << deposit
    << ";amount:" << this->_amount
    << ";nb_deposits:" << this->_nbDeposits << std::endl;
  _totalAmount += deposit;
  _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << this->_amount;
  if (withdrawal > this->_amount)
  {
    std::cout << ";withdrawal:refused" << std::endl;
    return false;
  }
  _amount -= withdrawal;
  this->_nbWithdrawals++;
  std::cout << ";withdrawal:" << withdrawal
    << ";amount:" << this->_amount
    << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  _totalAmount -= withdrawal;
  _totalNbWithdrawals++;
  return true;
}

int		Account::checkAmount( void ) const
{
  return this->_amount;
}
