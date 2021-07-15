/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:36 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:58:51 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main(void)
{
	Sorcerer	sorc("Zak", "Mage");
	Victim		vict("Ed");
	Peon		peon("Wawa");

	cout << sorc << endl;
	
	sorc.polymorph(vict);
	sorc.polymorph(peon);
	peon.getPolymorphed();
	return (0);
}