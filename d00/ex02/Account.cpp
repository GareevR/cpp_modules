/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macservis <macservis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 12:24:01 by macservis         #+#    #+#             */
/*   Updated: 2021/07/27 18:20:16 by macservis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	return ;
}

Account::Account(int initial_deposit) :
					_nbDeposits(0), _nbWithdrawals(0)
{
	t::_nbAccounts++;
	t::_totalAmount += initial_deposit;
	this->_accountIndex = t::_nbAccounts - 1;
	this->_amount = initial_deposit;

	t::_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"created" <<
	std::endl;

	return ;
}

Account::~Account(void)
{
	t::_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"closed" <<
	std::endl;

	return ;
}

void	Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	std::cout <<
		"accounts:" << t::getNbAccounts() << ";" <<
		"total:" << t::getTotalAmount() << ";" <<
		"deposits:" << t::getNbDeposits() << ";" <<
		"withdrawals:" << t::getNbWithdrawals() <<
	std::endl;

	return ;
}


void	Account::displayStatus(void) const
{
	t::_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"deposits:" << this->_nbDeposits << ";" <<
		"withdrawals:" << this->_nbWithdrawals <<
	std::endl;

	return ;
}

void	Account::makeDeposit(int deposit)
{
	t::_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"p_amount:" << this->_amount << ";" <<
		"deposit:" << deposit << ";" <<
		"amount:" << this->_amount + deposit << ";" <<
		"nb_deposits:" << this->_nbDeposits + 1 << ";" <<
	std::endl;

	this->_nbDeposits++;
	this->_amount += deposit;

	t::_totalAmount += deposit;
	t::_totalNbDeposits++;

	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	t::_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	if (checkAmount() != 0)
	{
		this->_amount += withdrawal;
		std::cout <<
			"withdawal:refused" <<
		std::endl;
		return false;
	}

	this->_nbWithdrawals++;

	t::_totalAmount -= withdrawal;
	t::_totalNbWithdrawals++;

	std::cout <<
		"withdrawal:" << withdrawal << ";" <<
		"amount:" << this->_amount << ";" <<
		"nb_withdrawals:" << this->_nbWithdrawals <<
	std::endl;

	return true;
}

int		Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return 1;
	return 0;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	rawtime;
	std::tm*	timeinfo;
	char		buffer[80];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer << " ";

	return ;
}

int		Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}
