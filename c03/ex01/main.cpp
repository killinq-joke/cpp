/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:49:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 14:44:41 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scavtrap("zak");

	scavtrap.attack("kmacquet");
	scavtrap.takeDamage(11);
	scavtrap.beRepaired(20);
	scavtrap.guardGate();
	return (0);
}