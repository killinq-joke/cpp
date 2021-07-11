/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 20:21:40 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 17:42:25 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using namespace std;

HumanA::HumanA(string name) : name(name) {
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	cout << this->name << " attacks with his " << this->weapon.type << endl;
}
