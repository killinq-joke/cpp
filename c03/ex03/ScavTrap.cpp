/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:22:26 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 16:43:31 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	cout << "scav constructor called" << endl;
}

ScavTrap::ScavTrap(string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	cout << "scav constructor called" << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << "scav destructor called" << endl;
}

void	ScavTrap::guardGate(void)
{
	cout << this->_name << " have enterred in Gate keeper mode" << endl;
}