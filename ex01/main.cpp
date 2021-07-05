/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:09:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 11:57:03 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

int	main(void)
{
	int			i;
	PhoneBook	phonebook;
	Contact		newcontact;
	std::string	name;

	while (name != "EXIT")
	{
		std::cin >> name;
		if (name == "ADD")
		{
			std::cout << "Enter first name:" << std::endl;
			std::cin >> newcontact.firstname;
			std::cout << "Enter last name:" << std::endl;
			std::cin >> newcontact.lastname;
			std::cout << "Enter nickname:" << std::endl;
			std::cin >> newcontact.nickname;
			std::cout << "Enter phonenumber:" << std::endl;
			std::cin >> newcontact.firstname;
			std::cout << "Enter darkest secret:" << std::endl;
			std::cin >> newcontact.darkestsecret;
			phonebook.add(newcontact);
		}
		else if (name == "SEARCH")
		{
			std::cout << "   idx    |  fname   |  lname   | nickname " << std::endl;
			i = 0;
			while (i < phonebook.contactnum)
			{
				std::cout << i << "|" << phonebook.contacts[i].firstname << "|" << phonebook.contacts[i].lastname << "|" << phonebook.contacts[i].nickname << std::endl;
				i++;
			}
		}
	}
	return (0);
}
