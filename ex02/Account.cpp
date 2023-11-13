/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:01:25 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 02:49:14 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
using std::cout;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

int Account::_nbAccounts = 0;

Account::Account(int inital_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = inital_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts ++;
	_totalAmount += this->_amount;

	_displayTimestamp();
	cout << "index:" <<this->_accountIndex << ';'
		 << "amount:" << checkAmount() << ';'
		 << "created" << '\n';
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	cout << "index:" <<this->_accountIndex << ';'
		 << "amount:" << checkAmount() << ';'
		 << "closed" << '\n';
}

void	Account::_displayTimestamp(void)
{
	time_t time_now = time(NULL);
	struct tm *pLocal = std::localtime(&time_now);
	// cout << std::put_time(localtime(&time_now), "[%Y%m%d_%H%M%S]");
	cout << '[' << pLocal->tm_year + 1900 << pLocal->tm_mon << pLocal->tm_mday << "_"
    	 << pLocal->tm_hour	<< pLocal->tm_min << pLocal->tm_sec << "] ";
}

int		Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int 	Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return(this->_amount);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ';'
		 << "total:" << getTotalAmount() << ';'
		 << "deposits:" << getNbDeposits() << ';'
		 << "withdrawals:" << getNbWithdrawals() << '\n';
}


void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ';'
		 << "p_amount:" << checkAmount() << ';'
		 << "deposit:" << deposit << ';';
	this->_amount += deposit;
	cout << "amount:" << checkAmount() << ';';
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << "nb_deposits:" << this->_nbDeposits << '\n';
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ';'
		 << "p_amount:" << checkAmount() << ';'
		 << "withdrawal:";
	
	if (this->_amount - withdrawal < 0)
	{
		cout << "refused" << '\n';
		return(false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	
	cout << withdrawal << ';'
		 << "amount:" << checkAmount() << ';'
		 << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ';'
		 << "amount:" << checkAmount() << ';'
		 << "deposits:" << this->_nbDeposits << ';'
		 << "withdrawals:" << this->_nbWithdrawals << '\n';
}