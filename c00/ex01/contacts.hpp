/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:58:11 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/05 16:14:59 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <string>
# include <iostream>

class Contact {

	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
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
