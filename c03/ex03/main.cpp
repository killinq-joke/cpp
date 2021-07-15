/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:49:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 14:00:07 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	diamondtrap("zak");

	diamondtrap.attack("kmacquet");
	diamondtrap.displaystats();
	diamondtrap.whoAmI();
	diamondtrap.takeDamage(11);
	diamondtrap.beRepaired(20);
	diamondtrap.highFivesGuys();
	diamondtrap.guardGate();
	return (0);
}