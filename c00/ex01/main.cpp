/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:09:32 by ztouzri           #+#    #+#             */
/*   Updated: 2021/08/16 19:00:55 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

void	strformat(std::string str)
{
	std::string cpy;
	int	i;

	i = str.size();
	cpy = str.substr(0, 10);
	if (i <= 10)
	{
		while (i < 10)
		{
			cout << " ";
			i++;
		}
	}
	else
		cpy[9] = '.';
	cout << cpy;
}

std::string	readString(std::istream& stream)
{
	std::string	str;

	stream >> str;
	return (str);
}

int		serviceADD(PhoneBook *phonebook)
{
	Contact		newcontact;

	cout << "Enter first name:" << endl;
	newcontact.setFirstName(readString(cin));
	if (cin.eof())
		return (0);
	cout << "Enter last name:" << endl;
	newcontact.setLastName(readString(cin));
	if (cin.eof())
		return (0);
	cout << "Enter nickname:" << endl;
	newcontact.setNickName(readString(cin));
	if (cin.eof())
		return (0);
	cout << "Enter phonenumber:" << endl;
	newcontact.setPhoneNumber(readString(cin));
	if (cin.eof())
		return (0);
	cout << "Enter darkest secret:" << endl;
	newcontact.setDarkestSecret(readString(cin));
	if (cin.eof())
		return (0);
	phonebook->add(newcontact);
	return (1);
}

int		serviceSEARCH(PhoneBook *phonebook)
{
	int			i;
	int			index;
	std::string	strindex;

	cout << "     index| firstname|  lastname|  nickname|" << endl;
	i = 0;
	while (i < phonebook->contactnum)
	{
		strformat(to_string(i + 1));
		cout << "|";
		strformat(phonebook->contacts[i].getFirstName());
		cout << "|";
		strformat(phonebook->contacts[i].getLastName());
		cout << "|";
		strformat(phonebook->contacts[i].getNickName());
		cout << "|" << endl;
		i++;
	}
	cout << "Which index do you want to search:" << endl;
	cin >> strindex;
	if (cin.peek() == EOF)
		return (0);
	index = strindex[0] - '0';
	if (strindex.size() != 1 || !isdigit(strindex[0]) || index < 1 || index > phonebook->contactnum)
		cout << "NONE EXISTING INDEX" << endl;
	else
	{
		cout << "first name: " << phonebook->contacts[index - 1].getFirstName() << endl;
		cout << "last name: " << phonebook->contacts[index - 1].getLastName() << endl;
		cout << "nickname: " << phonebook->contacts[index - 1].getNickName() << endl;
		cout << "phone number: " << phonebook->contacts[index - 1].getPhoneNumber() << endl;
		cout << "darkest secret: " << phonebook->contacts[index - 1].getDarkestSecret() << endl;
	}
	return (1);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (command != "EXIT")
	{
		cin >> command;
		if (cin.eof())
			return (1);
		if (command == "ADD")
		{
			if (!serviceADD(&phonebook))
				return (1);
		}
		else if (command == "SEARCH")
			if (!serviceSEARCH(&phonebook))
				return (1);
	}
	return (0);
}
