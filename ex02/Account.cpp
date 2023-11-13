/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <antoinemalignon@yahoo.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:01:25 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/14 01:37:29 by amaligno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
using std::cout;

Account::Account(int inital_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = inital_deposit;
	this->_accountIndex = _nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;

	Account::_displayTimestamp();
	cout << " index:" <<this->_accountIndex << ';'
		 << "amount:" << checkAmount() << ';'
		 << "created" << '\n';
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	cout << ' '
		 << "index:" <<this->_accountIndex << ';'
		 << "amount:" << checkAmount() << ';'
		 << "closed" << '\n';
}

void	Account::_displayTimestamp(void)
{
	time_t time_now;
	
	time_now = time(NULL);
	cout << std::put_time(localtime(&time_now), "[%Y%m%d_%H%M%S]");
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
	Account::_displayTimestamp();
	cout << " accounts:" << Account::getNbAccounts() << ';'
		 << "total:" << Account::getTotalAmount() << ':'
		 << "deposits:" << Account::getNbDeposits() << ';'
		 << "withdrawals:" << Account::getNbWithdrawals() << '\n'
}


void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp;
	cout << " index:" << this->_accountIndex << ';'
		 << "p_amount:" << checkAmount() << ';'
		 << "deposit:" << deposit << ';';
	this->_amount += deposit;
	cout << "amount:" << checkAmount() << ';';
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	cout << "nb_deposits:" << this->_nbDeposits << '\n';
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	cout << "index:" << this->_accountIndex << ';'
		 << "p_amount:" << checkAmount() << ';'
		 << "withdrawal:";
	
	if (this->_amount - withdrawal < 0)
	{
		cout << "refused" << '\n';
		return(false);
	}
	this->_amount -= withdrawal;
	Account::_totalAmount += withdrawal;
	Account::_totalNbWithdrawals -= 1;
	
	cout << withdrawal << ';'
		 << "amount:" << checkAmount() << ';'
		 << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
	return (true);
}