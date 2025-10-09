/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:07:32 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/09 13:43:32 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "string"
#include "ctime"

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount = _totalAmount + initial_deposit;
}

Account::~Account()
{
    std::cout << __TIMESTAMP__ << _accountIndex << _amount << std::endl;
}

void Account::makeDeposit (int deposit)
{
    int p_amount;

    p_amount = this->_amount;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << this->_accountIndex << p_amount << this->_amount << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount;

    p_amount = this->_amount;
    if (withdrawal > _amount)
    {
        std::cout << this->_accountIndex << p_amount << "withdrawal:refused" << std::endl;
        return (1);
    }
    this->_amount -= withdrawal;
    _nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    std::cout << __TIMESTAMP__ << this->_accountIndex << p_amount << withdrawal << this->_amount << std::endl;
    return (0);
}

int Account::checkAmount(void)const
{
    return (this->_amount);
}

void Account::displayStatus(void)const
{
    std::cout << __TIMESTAMP__ << this->_accountIndex << this->_amount << this->_nbDeposits << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    std::cout << __TIMESTAMP__  << getNbAccounts() << getTotalAmount() << getNbDeposits() << getNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t actual_time;
    std::tm *time;
    
    actual_time = std::time(0);
    time = std::localtime(&actual_time);
    std::cout << "["<< time->tm_year <<  time->tm_mon << time->tm_mday << "_" << time->tm_hour << time->tm_min << time->tm_sec <<"]" << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}