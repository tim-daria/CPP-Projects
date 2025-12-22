/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-21 18:53:14 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-21 18:53:14 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){};

void	Account::_displayTimestamp(void)
{
	time_t current_time = time(NULL);
	tm *datetime = localtime(&current_time);

	std::cout << "[" << (datetime->tm_year + 1900)
	<< (datetime->tm_mon + 1) << datetime->tm_mday << "_"
	<< std::setw(2) << datetime->tm_hour
	<< std::setw(2) << datetime->tm_min
	<< std::setw(2) << datetime->tm_sec << "] ";
}

Account::Account(int initial_deposit): _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void){
	return _nbAccounts;
}

int	Account::getTotalAmount(void){
	return _totalAmount;
}

int	Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << checkAmount() << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits ++;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
	if (withdrawal > _amount){
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals ++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount()
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount()
		<< ";deposits:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
}
