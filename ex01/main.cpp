/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:09:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 14:21:37 by ztouzri          ###   ########.fr       */
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
	int			i;
	int			index;
	std::string	strindex;

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
	std::cout << "Which index do you want to search:" << std::endl;
	std::cin >> strindex;
	index = strindex[0] - '0';
	if (strindex.size() != 1 || !isdigit(strindex[0]) || index < 1 || index > phonebook->contactnum)
		std::cout << "NONE EXISTING INDEX" << std::endl;
	else
	{
		std::cout << "first name: " << phonebook->contacts[index - 1].firstname << std::endl;
		std::cout << "last name: " << phonebook->contacts[index - 1].lastname << std::endl;
		std::cout << "nickname: " << phonebook->contacts[index - 1].nickname << std::endl;
		std::cout << "phone number: " << phonebook->contacts[index - 1].phonenumber << std::endl;
		std::cout << "darkest secret: " << phonebook->contacts[index - 1].darkestsecret << std::endl;
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (command != "EXIT")
	{
		std::cin >> command;
		if (command == "ADD")
			serviceADD(&phonebook);
		else if (command == "SEARCH")
			serviceSEARCH(&phonebook);
	}
	return (0);
}
