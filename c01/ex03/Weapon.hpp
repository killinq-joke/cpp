/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:57:39 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/08 20:10:50 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Weapon {
	Weapon(void);
	~Weapon(void);

	std::string const	getType(void);
	void				setType(void);

	std::string	type;
};
