/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:33:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/08 18:52:19 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*horde;
	int		nb;
	int		i;

	nb = 10;
	horde = zombieHorde(nb, "zombie");
	i = 0;
	while (i < nb)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
