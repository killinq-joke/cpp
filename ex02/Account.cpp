/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:24:35 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 18:06:04 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(1)
{
	this->_totalAmount = _amount;
	this->_totalNbDeposits = _nbDeposits;
	std::cout << "constructor" << std::endl;
}

Account::~Account(void)
{
	std::cout << "destructor" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}

static int	Account::getNbAccounts( void )
{
}

static int	Account::getTotalAmount( void )
{

}

static int	getNbDeposits( void )
{

}

static int	getNbWithdrawals( void )
{

}

static void	displayAccountsInfos( void )
{

}
