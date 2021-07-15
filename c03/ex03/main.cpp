/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:49:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 11:45:58 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	diamondtrap("zak");

	diamondtrap.attack("kmacquet");
	diamondtrap.displaystats();
	// diamondtrap.takeDamage(11);
	// diamondtrap.beRepaired(20);
	return (0);
}