/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:04:44 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/12 13:12:27by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void	runfile(fstream& file, size_t chartorun)
{
	size_t	i;
	char	c;

	i = 0;
	if (file)
	{
		while (i < chartorun)
		{
			file >> noskipws >> c;
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int		found;
	int		i;
	char	c;
	fstream	file;
	string	str;
	string	res = "";
	ostringstream ss;

	if (ac == 4)
	{
		file.open(av[1], ios::in | ios::out);
		if (!file.good())
		{
			cerr << "file doesn't exist" << endl;
			return (1);
		}
		ss << file.rdbuf();
		str = ss.str();
		file.clear();
        file.seekg(0);
		i = 0;
		while (file)
		{
			found = str.find(av[2], i);
			if (i == found)
			{
				res.append(av[3]);
				i += strlen(av[2]);
				runfile(file, strlen(av[2]));
				continue ;
			}
			file >> noskipws >> c;
			i++;
			if (!file.eof() && c)
				res.append(1, c);
		}
		file.clear();
        file.seekg(0);
		if (!res.empty())
			cout << res;
		file.close();
	}
	else
		cout << "Usage: ./replace Filename Stringtoreplace Replacingstring" << endl;
	return (0);
}
