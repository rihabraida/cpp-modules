#include "Account.hpp"
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0){}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;

}


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
void Account::displayAccountsInfos()
{
    std::cout << _nbAccounts << "\n";
    std::cout << _totalAmount << "\n";
    std::cout << _totalNbDeposits << "\n";
    std::cout << _totalNbWithdrawals << "\n";
}



void makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount +=_deposit;
    _totalNbDeposits++;
}
bool makeWithdrawal(int withdrawal)
{
    if(_amount > withdrawal)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -=withdrawal;
        _totalNbWithdrawals++;
        return(true);
    }
    else
        return(false);
}
int checkAmount() const
{
    return(_amount);
}
void    displayStatus() const
{
    std::cout << "index:" << _accountIndex << "\n";
    std::cout << "amout:" << _amount << "\n";
    std::cout << "deposits": << _nbDeposits << "\n";
    std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}