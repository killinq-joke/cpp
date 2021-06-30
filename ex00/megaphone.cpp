/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:21:19 by ztouzri           #+#    #+#             */
/*   Updated: 2021/06/30 18:34:58 by ztouzri          ###   ########.fr       */
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

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	*strtoupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int		i;
	char	basestr[] = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	if (ac < 2)
		ft_putstr(basestr);
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_putstr(strtoupper(av[i]));
			if (i < ac - 1)
				ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
