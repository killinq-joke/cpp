/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 17:44:44 by ztouzri          ###   ########.fr       */
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
	if (enemy == NULL)
		return ;
	if (this->isWeaponEquipped() && this->getAP() >= this->_weapon->getAPCost())
	{
		cout << this->getName() + " attacks " + enemy->getType() + " with a " + this->_weapon->getName() << endl;
		this->setAP(this->getAP() - this->_weapon->getAPCost());
		this->_weapon->attack();
		enemy->setHP(enemy->getHP() - this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			cout << enemy << endl;
			delete enemy;
			enemy = NULL;
			// cout << enemy << endl;
		}
	}
}
bool	Character::isWeaponEquipped(void) const
{
	if (this->_weapon)
		return (true);
	return (false);
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

ostream&	operator<<(ostream& o, Character const & c1)
{
	if (c1.isWeaponEquipped())
		o << c1.getName() << " has " << c1.getAP() << " AP and wields a " << c1.getWeaponName();
	else
		o << c1.getName() << " has " << c1.getAP() << " AP and is unarmed";

	return (o);
}