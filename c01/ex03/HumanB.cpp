/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 18:02:33 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using namespace std;

HumanB::HumanB(string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) const {
	if (!this->weapon)
		cout << this->name << " doesn't attack" << endl;
	else
		cout << this->name << " attacks with his " << this->weapon->type << endl;
}
