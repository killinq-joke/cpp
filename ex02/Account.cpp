/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:24:35 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/08 14:14:57 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(1)
{
	Account::_totalAmount = _amount;
	Account::_totalNbDeposits = _nbDeposits;
	std::cout << "constructor" << std::endl;
}

Account::~Account(void)
{
	std::cout << "destructor" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
}

int	Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	displayAccountsInfos( void )
{

}
