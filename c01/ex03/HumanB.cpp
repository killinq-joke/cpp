/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:48 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 17:38:08 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using namespace std;

HumanB::HumanB(string name) {
	this->name = name;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) const {
	cout << this->name << " attacks with his " << this->weapon->type << endl;
}
