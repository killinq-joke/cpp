/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:06:25 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 18:06:42 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name)
{
	this->_name = name;
	this->_attackdamage = FragTrap::_attackdamage;
	this->_energypoints = FragTrap::_energypoints;
	this->_hitpoints = ScavTrap::_hitpoints;
	cout << "diamondtrap constructor called" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "diamondtrap destructor called" << endl;
}

void	DiamondTrap::displaystats(void)
{
	cout << "name: " << this->_name << " attack: " << this->_attackdamage << " energy: " << this->_energypoints << " hp: " <<this->_hitpoints << endl;
}