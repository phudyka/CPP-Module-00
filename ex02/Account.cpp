/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:55:18 by phudyka           #+#    #+#             */
/*   Updated: 2023/10/30 12:04:36 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	tm			*local;
	time_t		now;
	std::string	clock;
	char		buf[20];

	now = time(0);
	local = localtime(&now);
	strftime(buf, 20, "[%Y%m%d_%H%M%S] ", local);
	clock.assign(buf);
	std::cout << clock;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	_accountIndex = getNbAccounts();
	_amount = initial_deposit + _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_totalAmount += _amount;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ":amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getTotalAmount();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index;" << _accountIndex;
	std::cout << ";p_amount" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount;
	_nbDeposits += 1;
	std::cout << ";nb_deposits" << _nbDeposits << std::endl;
	_totalNbDeposits += _nbDeposits;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if ((_amount - withdrawal) < 0 || checkAmount() == 1)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		_amount = _amount - withdrawal;
		std::cout << withdrawal;
		std::cout << ";amount:" << _amount;
		_nbWithdrawals++;
		_totalNbWithdrawals = _nbDeposits;
		_totalAmount -= withdrawal;
		std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	if (_amount <= 0)
		return (1);
	else
		return (0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";depostis:" << _nbDeposits;
	std::cout << ";witdrawals:" << _nbWithdrawals << std::endl;
}
