/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 18:04:44 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/11 21:53:41 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

int	main(int ac, char **av)
{
	string	str;
	fstream	file;

	if (ac == 4)
	{
		file.open(av[1], ios::in | ios::out);
		if (!file.good())
		{
			cerr << "file doesn't exist" << endl;
			return (1);
		}
		//while file
		//if file[i] == next found
		//str << "replace string"
		//i += stringtoreplace.len()
		//else
		//str << file[i]
		//i++
		file >> str;
		cout << str << endl;
		file.clear();
		file << str;
	}
	else
		cout << "Usage: ./replace Filename Stringtoreplace Replacingstring" << endl;
	return (0);
}
