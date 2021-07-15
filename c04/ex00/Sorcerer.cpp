/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:22 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:18:36 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(string name, string title)
{
	this->_name = name;
	this->_title = title;
    cout << this->_name + ", " + this->_title + ", is born!" << endl;
}

Sorcerer::~Sorcerer()
{
    cout << this->_name + ", " + this->_title + ", is dead. Consequences will never be the same!" << endl;
}

string	Sorcerer::introduce(bool isOstream) const
{
	if (!isOstream)
		cout << "I am " + this->_name + ", " + this->_title + ", and I like ponies!" << endl;
	return ("I am " + this->_name + ", " + this->_title + ", and I like ponies!");
}


ostream&	operator<<(ostream& o, Sorcerer const & s1)
{
	o << s1.introduce(true);
	return (o);
}