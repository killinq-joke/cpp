/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:16:17 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 11:32:49 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void	PhoneBook::Constructor(void)
{
	this->contactnum = 0;
}

void	PhoneBook::add(Contact newcontact)
{
	int		i;
	Contact	tmp;

	if (this->contactnum < 8)
	{
		this->contacts[contactnum] = newcontact;
		this->contactnum++;
	}
	else
	{
		i = 0;
		while (i < 7)
		{
			this->contacts[i] = this->contacts[i + 1];
			i++;
		}
		this->contacts[contactnum] = newcontact;
	}
}
