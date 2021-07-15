/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:05:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 23:26:23 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int	main()
{
	PlasmaRifle	rifle;
	PowerFist	fist;

	rifle.attack();
	fist.attack();
	return (0);
}