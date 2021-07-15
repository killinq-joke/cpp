/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:30 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 23:48:54 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, string const & type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy(void)
{
}

string	Enemy::getType(void) const
{
	return (this->_type);
}

int		Enemy::getHP(void) const
{
	return (this->_hp);
}

void	Enemy::setHP(int hp)
{
	this->_hp = hp;
}

void	Enemy::takeDamage(int dmg)
{
	if (dmg > 0)
		this->setHP(this->getHP() - dmg);
}