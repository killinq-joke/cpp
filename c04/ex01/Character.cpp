/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 01:11:40 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(string const & name) : _name(name), _ap(40)
{
}

Character::~Character(void)
{
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
