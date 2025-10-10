/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:07:32 by gafreire          #+#    #+#             */
/*   Updated: 2025/10/10 18:58:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount = _totalAmount + initial_deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit (int deposit)
{
    int p_amount;

    p_amount = this->_amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";p_amount:" << p_amount
                << ";deposit:" << deposit
                << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    int p_amount;

    p_amount = this->_amount;
    if (withdrawal > _amount)
    {
        Account::_displayTimestamp();
        std::cout   << " index:" << _accountIndex
                    << ";p_amount:" << p_amount
                    << ";withdrawal:refused"
                    << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    _nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    Account::_displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";p_amount:" << p_amount
                << ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return (true);
}

int Account::checkAmount(void)const
{
    return (this->_amount);
}

void Account::displayStatus(void)const
{
    Account::_displayTimestamp();
    std::cout   << " index:" << _accountIndex
                << ";amount:" << _amount
                << ";deposits:" << _nbDeposits
                << ";withdrawals:" << _nbWithdrawals
                << std::endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout   << " accounts:" << Account::getNbAccounts()
                << ";total:" << Account::getTotalAmount()
                << ";deposits:" << Account::getNbDeposits()
                << ";withdrawals:" << Account::getNbWithdrawals()
                << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t actual_time;
    std::tm *time;
    
    actual_time = std::time(0);
    time = std::localtime(&actual_time);
    std::cout   << "["
                << (time->tm_year + 1900) 
                << std::setw(2) << std::setfill('0') << (time->tm_mon + 1) 
                << std::setw(2) << std::setfill('0') << time->tm_mday 
                << "_" 
                << std::setw(2) << std::setfill('0') << time->tm_hour 
                << std::setw(2) << std::setfill('0') << time->tm_min 
                << std::setw(2) << std::setfill('0') << time->tm_sec 
                << ']';
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