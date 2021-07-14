/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:52:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 15:02:36 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
	cout << "constructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
	cout << "constructor called" << endl;
}

ClapTrap::~ClapTrap(void)
{
	cout << "destructor called" << endl;
}

void	ClapTrap::attack(string const & target)
{
	cout << this->_name << " attacks " << target << ", causing " << this->_attackdamage << " points of damage!" << endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	cout << this->_name << " takes " << amount << " damage!" << endl;
	cout << "He now has " << this->_hitpoints << "hp" << endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	cout << this->_name << " repaires " << amount << " hp!" << endl;
	cout << "He now has " << this->_hitpoints << "hp" << endl;
}