/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:09:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 13:58:50 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void	strformat(std::string str)
{
	std::string cpy;
	int	i;

	i = str.size();
	cpy = str.substr(0, 10);
	if (i < 10)
	{
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
	}
	else
		cpy[9] = '.';
	std::cout << cpy;
}

void	serviceADD(PhoneBook *phonebook)
{
	Contact		newcontact;

	std::cout << "Enter first name:" << std::endl;
	std::cin >> newcontact.firstname;
	std::cout << "Enter last name:" << std::endl;
	std::cin >> newcontact.lastname;
	std::cout << "Enter nickname:" << std::endl;
	std::cin >> newcontact.nickname;
	std::cout << "Enter phonenumber:" << std::endl;
	std::cin >> newcontact.phonenumber;
	std::cout << "Enter darkest secret:" << std::endl;
	std::cin >> newcontact.darkestsecret;
	phonebook->add(newcontact);
}

void	serviceSEARCH(PhoneBook *phonebook)
{
	int	i;

	std::cout << "     index| firstname|  lastname|  nickname|" << std::endl;
	i = 0;
	while (i < phonebook->contactnum)
	{
		strformat(std::to_string(i + 1));
		std::cout << "|";
		strformat(phonebook->contacts[i].firstname);
		std::cout << "|";
		strformat(phonebook->contacts[i].lastname);
		std::cout << "|";
		strformat(phonebook->contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	name;

	while (name != "EXIT")
	{
		std::cin >> name;
		if (name == "ADD")
			serviceADD(&phonebook);
		else if (name == "SEARCH")
			serviceSEARCH(&phonebook);
	}
	return (0);
}
