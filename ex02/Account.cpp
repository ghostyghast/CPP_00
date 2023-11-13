/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaligno <amaligno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:01:25 by amaligno          #+#    #+#             */
/*   Updated: 2023/11/13 22:45:09 by amaligno         ###   ########.fr       */
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
}

Account::~Account(void)
{
	cout << this->_accountIndex << ';'
		 << this->_amount << ';'
		 << "closed" << '\n';
}

void Account::_displayTimestamp(void);
{
	cout << strftime();
}

int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}


