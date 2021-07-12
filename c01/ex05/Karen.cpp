/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:42:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/12 14:28:30y ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

using namespace std;

Karen::Karen(void)
{
};

Karen::~Karen(void)
{
}

void	Karen::complain(string level)
{
	int	i;
	t_fnptr	arr[4];

	arr[0] = &Karen::debug;
	arr[1] = &Karen::info;
	arr[2] = &Karen::warning;
	arr[3] = &Karen::error;
	i = 0;
	while (i < 4)	
	{
		if (level == this->fctstring[i])
			arr[i]();
	}
	this->arr[0];
}

void Karen::debug(void)
{
	cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << endl;
}

void Karen::info(void)
{
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << endl;
}

void Karen::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << endl;
}

void Karen::error(void)
{
	cout << "This is unacceptable, I want to speak to the manager now." << endl;
}