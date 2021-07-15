/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:41 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:27:08by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(string name)
{
	this->_name = name;
	cout << "Some random victim called " + this->getName() + " just appeared!" << endl;
}

Victim::~Victim(void)
{
	cout << "Victim " + this->getName() + " just died for no apparent reason!" << endl;
}

string	Victim::getName(void) const
{
	return (this->_name);
}

void	Victim::introduce(void) const
{
	cout << "I'm " + this->getName() + " and I like otters!" << endl;
}

void	Victim::getPolymorphed(void) const
{
	cout << this->getName() << " has been turned into a cute little sheep!" << endl;
}
