/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:20 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 20:30:53 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & a1) : _name(a1.getName()), _apcost(a1.getAPCost()), _damage(a1.getDamage())
{
}

AWeapon::~AWeapon(void)
{
}

AWeapon&	AWeapon::operator=(AWeapon const & a1)
{
	this->_name = a1.getName();
	this->_apcost = a1.getAPCost();
	this->_damage = a1.getDamage();

	return (*this);
}

string		AWeapon::getName(void) const
{
	return (this->_name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int			AWeapon::getDamage(void) const
{
	return (this->_damage);
}