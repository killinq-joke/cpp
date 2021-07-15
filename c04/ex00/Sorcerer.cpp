/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:22 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 18:29:25 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(string name, string title)
{
	this->_name = name;
	this->_title = title;
    cout << this->getName() + ", " + this->getTitle() + ", is born!" << endl;
}

Sorcerer::Sorcerer(Sorcerer const &s1) : _name(s1.getName()), _title(s1.getTitle())
{
}

Sorcerer::~Sorcerer()
{
    cout << this->getName() + ", " + this->getTitle() + ", is dead. Consequences will never be the same!" << endl;
}

string	Sorcerer::introduce(bool isOstream) const
{
	if (!isOstream)
		cout << "I am " + this->getName() + ", " + this->getTitle() + ", and I like ponies!" << endl;
	return ("I am " + this->getName() + ", " + this->getTitle() + ", and I like ponies!\n");
}
string	Sorcerer::getName(void) const
{
	return (this->_name);
}

string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void	Sorcerer::polymorph(Victim const & v1) const
{
	v1.getPolymorphed();
}

ostream&	operator<<(ostream& o, Sorcerer const & s1)
{
	o << s1.introduce(true);
	return (o);
}