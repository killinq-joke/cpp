/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:05:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 17:46:45 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main()
{
	Enemy*			ben = new RadScorpion();
	Character		zak("zak");
	AWeapon*		rifle = new PlasmaRifle();
	AWeapon*		fist = new PowerFist();

	rifle->attack();
	fist->attack();
	zak.attack(ben);
	cout << zak << endl;
	zak.equip(fist);
	zak.attack(ben);
	cout << ben << endl;
	zak.attack(ben);
	cout << ben << endl;
	// cout << "salut " << ben<< endl;
	// zak.attack(NULL);
	zak.attack(ben);
	zak.attack(ben);
	// zak.attack(ben);
	zak.recoverAP();
	// zak.equip(rifle);
	// zak.attack(ben);
	cout << zak << endl;
	// delete fist;
	// delete rifle;

	return (0);
}