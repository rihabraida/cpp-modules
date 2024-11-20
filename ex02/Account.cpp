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
    std::cout << " index:" << _accountIndex <<";";
    std::cout << "amount:" << _amount  <<";";
    std::cout << "created\n";
    
}

Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;
     _displayTimestamp();
    std::cout << " index:" << _accountIndex <<";";
    std::cout << "amount:" << _amount  <<";";
    std::cout << "closed\n";
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
    _displayTimestamp();
    std::cout<< " accoounts:" << _nbAccounts <<";";
    std::cout << "total:" << _totalAmount <<";";
    std::cout << "deposits:" << _totalNbDeposits <<";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}



void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amout:" << _amount << ";";
    _amount += deposit;
    _nbDeposits++;
    _totalAmount +=deposit;
    _totalNbDeposits++;

    std::cout << "deposit:" << _nbDeposits << ";";
    std::cout << "amout:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbWithdrawals << "\n";
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "p_amout:" << _amount << ";";
    if(_amount > withdrawal)
    {

        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -=withdrawal;
        _totalNbWithdrawals++;

        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amout:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
        return(true);
    }
    else
        std::cout << "withrawal:refused\n";
        return(false);
}
int Account::checkAmount() const
{
    return(_amount);
}
void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";";
    std::cout << "amout:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << "\n";
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