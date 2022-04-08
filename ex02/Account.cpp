/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:42:07 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/08 14:05:14 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

/* Initialize static class variables */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Private constructor without parameters */
Account::Account(void)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

/* Print timestamp of local time */
void	Account::_displayTimestamp(void)
{
	time_t	epochTime = time(NULL);
	struct	tm *calendarTime = localtime(&epochTime);
	
	std::cout << '[' << calendarTime->tm_year + 1900;
	std::cout << std::setw(2) << std::setfill('0') << calendarTime->tm_mon + 1;
	std::cout << std::setw(2) << std::setfill('0') << calendarTime->tm_mday << '_';
	std::cout << std::setw(2) << std::setfill('0') << calendarTime->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << calendarTime->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << calendarTime->tm_sec << ']';
}

/* Public constructor with deposit as parameter */
Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount *= initial_deposit;
	this->_nbDeposits = 0;
	this-> _nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

/* Public destructor */
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/* Getter functions */
int		Account::getNbAccounts(void) { return _nbAccounts; }
int		Account::getTotalAmount(void) { return _totalAmount; }
int		Account::getNbDeposits(void) { return _totalNbDeposits; }
int		Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

/* Print information of Account */
void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "widthdrawals" << getNbWithdrawals() << std::endl;
}

/* Function to check current amount */
int		Account::checkAmount(void) const { return this->_amount; }

/* Function to make a deposit */
void	Account::makeDeposit(int deposit)
{
	const int	p_amount = this->checkAmount();
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

/* Function to make a withdrawal */
bool	Account::makeWithdrawal(int withdrawal)
{
	const int	p_amount = this->checkAmount();
	const bool	result = p_amount >= withdrawal;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << p_amount << ";";
	if (result)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
	}
	else
		std::cout << "withdrawal:" << "refused" << std::endl;
	return result;
}

/* Function to dysplay status of each acount */
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}