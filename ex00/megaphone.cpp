/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:21:19 by ztouzri           #+#    #+#             */
/*   Updated: 2021/06/30 18:30:01 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;
	char	str[] = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";

	if (ac < 2)
		ft_putstr(str);
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			i++;
		}
	}
	return (0);
}
