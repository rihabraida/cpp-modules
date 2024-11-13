#include "Account.hpp"
#include<iostream>

Account::Account() : t(),_accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0){}
Account::Account
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int Account::getNbAccounts()
{
    return(_nbAccounts);
}
int Account::getTotalAmount()
{
    return(_totalAmount);
}
int Account::getNbDeposits()
{
    return(_totalNbDeposits);
}
int Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}
void    displayAccountsInfos()
{
    std::cout << _accountIndex << "\n";
    std::cout << _amount << "\n";
    std::cout << _nbDeposits << "\n";
    std::cout << _nbWithdrawals << "\n";
}