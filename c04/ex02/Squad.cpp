/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:49:26 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 21:38:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
}

Squad::~Squad()
{
}

int	Squad::getCount(void)
{
	return (this->_count);
}


int	Squad::push(ISpaceMarine* unit)
{
	return (this->getCount());
}

// void	Squad::getCount(void)
// {
// 	return (this->_count);
// }