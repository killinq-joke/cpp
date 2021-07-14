/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:58:11 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 18:54:24 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <string>
# include <iostream>

using namespace std;

class Contact {

public:
	string	getFirstName(void);
	string	getLastName(void);
	string	getNickName(void);
	string	getPhoneNumber(void);
	string	getDarkestSecret(void);
	void	setFirstName(string firstname);
	void	setLastName(string lastname);
	void	setNickName(string nickname);
	void	setPhoneNumber(string phonenumber);
	void	setDarkestSecret(string darkestsecret);

private:
	string	_firstname;
	string	_lastname;
	string	_nickname;
	string	_phonenumber;
	string	_darkestsecret;

};

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		contactnum;
	Contact	contacts[8];
	void	add(Contact);

};

#endif
