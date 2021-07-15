/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:36 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 19:56:42 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main(void)
{
	Sorcerer	sorc("Zak", "Mage");
	Sorcerer	cpy(sorc);
	Sorcerer&	a = sorc;
	Victim		vict("Ed");
	Victim		victcpy(vict);
	Victim&		b = vict;
	Peon		peon("Wawa");
	Peon		p2(peon);
	Peon&		p3 = peon;

	cout << sorc << a << vict << victcpy << b << peon << p2 << p3;
	
	sorc.polymorph(vict);
	sorc.polymorph(peon);
	peon.getPolymorphed();
	return (0);
}