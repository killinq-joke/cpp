/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:09:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/01 14:19:35 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <unistd.h>

void	ft_putstr(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.size())
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	ac = 0;
	av = 0;
	std::string	name = "zak\n";
	ft_putstr(name);
	return (0);
}
