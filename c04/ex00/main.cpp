/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:36 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 18:29:58 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main(void)
{
	Sorcerer	sorc("Zak", "Mage");
	Sorcerer	cpy(sorc);
	Victim		vict("Ed");
	Peon		peon("Wawa");

	cout << sorc << vict << peon;
	
	sorc.polymorph(vict);
	sorc.polymorph(peon);
	peon.getPolymorphed();
	return (0);
}