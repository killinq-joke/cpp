/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:58:13 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(string name) : Victim(name)
{
	cout << "Zog zog." << endl;
}

Peon::~Peon()
{
	cout << "Bleuark..." << endl;
}

void	Peon::getPolymorphed(void) const
{
	cout << this->getName() + " has been turned into a pink pony!" << endl;
}