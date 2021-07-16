/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 03:13:18 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(string const & name) : _name(name), _ap(40), _weapon(NULL)
{
}

Character::~Character(void)
{
}

void	Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy* enemy)
{
	cout << this->getName() + " attacks " + enemy->getType() + " with a " + this->_weapon->getName() << endl;
}

string	Character::getName(void) const
{
	return (this->_name);
}

string	Character::getWeaponName(void) const
{
	return (this->_weapon->getName());
}

int		Character::getAP(void) const
{
	return (this->_ap);
}

void	Character::setAP(int ap)
{
	this->_ap = ap;
}

void	Character::recoverAP(void)
{
	int	newap;
	
	newap = this->getAP() + 10;
	if (newap > 40)
		newap = 40;
	this->setAP(newap);
}
