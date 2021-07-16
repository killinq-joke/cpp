/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:05:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 03:51:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int	main()
{
	RadScorpion	ben;
	Character	zak("zak");
	PlasmaRifle	rifle;
	PowerFist	fist;

	rifle.attack();
	fist.attack();
	zak.attack(&ben);
	cout << zak << endl;
	zak.equip(&fist);
	zak.attack(&ben);
	zak.attack(&ben);
	zak.attack(&ben);
	zak.attack(&ben);
	zak.attack(&ben);
	zak.attack(&ben);
	cout << zak << endl;
	return (0);
}