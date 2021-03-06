/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:52 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 15:12:41 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(125, "Super Mutant")
{
	cout << "Gaaah. Me want smash heads!" << endl;
}

SuperMutant::~SuperMutant()
{
	cout << "Aaargh..." << endl;
}

void	SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
