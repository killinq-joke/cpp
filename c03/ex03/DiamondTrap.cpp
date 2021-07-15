/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:06:25 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 16:00:54 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string name)
{
	this->_name = name;
	this->_energypoints = ScavTrap::_energypoints;
	this->_hitpoints = ScavTrap::_hitpoints;
	this->_attackdamage = FragTrap::_attackdamage;
	ClapTrap::_name = this->_name + "_clap_trap";
	cout << "diamondtrap constructor called" << endl;
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "diamondtrap destructor called" << endl;
}

void	DiamondTrap::whoAmI(void)
{
	cout << this->_name << ", " << ClapTrap::_name << endl;
}

void	DiamondTrap::displaystats(void)
{
	cout << "name: " << this->_name << " attack: " << this->_attackdamage << " energy: " << this->_energypoints << " hp: " <<this->_hitpoints << endl;
}
void	DiamondTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	cout << this->_name << " takes " << amount << " damage!" << endl;
	cout << "He now has " << this->_hitpoints << "hp" << endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	cout << this->_name << " repaires " << amount << " hp!" << endl;
	cout << "He now has " << this->_hitpoints << "hp" << endl;
}