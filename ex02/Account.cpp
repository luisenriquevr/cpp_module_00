/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:42:07 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/07 18:52:02 by lvarela          ###   ########.fr       */
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

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

/* Print timestamp of local time */
void	Account::_displayTimestamp(void)
{
	time_t	epochTime = time(NULL);
	struct	tm *calendarTime = localtime(&epochTime);
	
	std::cout << '[' << calendarTime->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << calendarTime->tm_mon + 1
	<< std::setw(2) << std::setfill('0') << calendarTime->tm_mday << '_'
	<< std::setw(2) << std::setfill('0') << calendarTime->tm_hour
	<< std::setw(2) << std::setfill('0') << calendarTime->tm_min
	<< std::setw(2) << std::setfill('0') << calendarTime->tm_sec << ']';
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
	std::cout << "index:" << this->_accountIndex
	<< "amount:" << this->_amount
	<< ";created" << std::endl;
}

/* Public destructor */
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< "amount:" << this->_amount
	<< ";closed" << std::endl;
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
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "widthdrawals" << getNbWithdrawals() << std::endl;
}

/* Function to make a deposit */
void	Account::makeDeposit(int deposit)
{
	
}