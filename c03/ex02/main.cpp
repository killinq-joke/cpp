/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:49:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 14:57:43 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	fragtrap("zak");

	fragtrap.attack("kmacquet");
	fragtrap.takeDamage(11);
	fragtrap.beRepaired(20);
	return (0);
}