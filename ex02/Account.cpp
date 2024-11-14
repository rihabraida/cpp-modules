#include "Account.hpp"
#include<iostream>
#include <ctime>

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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex <<";";
    std::cout << "amount:" << _amount  <<";";
    std::cout << "created\n";
    
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



void Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount +=deposit;
    _totalNbDeposits++;
}
bool Account::makeWithdrawal(int withdrawal)
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
int Account::checkAmount() const
{
    return(_amount);
}
void    Account::displayStatus() const
{
    std::cout << "index: " << _accountIndex << "\n";
    std::cout << "amout: " << _amount << "\n";
    std::cout << "deposits: " << _nbDeposits << "\n";
    std::cout << "withdrawals: " << _nbWithdrawals << "\n";
}
void   Account:: _displayTimestamp()
{
    time_t now = time(0);
    tm *dt = localtime(&now);
    std::cout << "[" << 1900 + dt->tm_year ;
    std::cout << 1 + dt->tm_mon ;
    std::cout << dt->tm_mday << "_";
    std::cout << dt->tm_hour ;
    std::cout << dt->tm_min ;
    std::cout << dt->tm_sec << "]";

}