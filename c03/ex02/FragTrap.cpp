/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:47:07 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 15:00:32 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	cout << "frag constructor called" << endl;
}

FragTrap::~FragTrap(void)
{
	cout << "frag destructor called" << endl;
}

void	FragTrap::highFivesGuys(void)
{
	cout << this->_name << " requests a positive high fives!" << endl;
}