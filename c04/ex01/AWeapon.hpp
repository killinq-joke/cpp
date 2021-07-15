/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:24 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 20:29:50 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>

using namespace std;

class AWeapon
{

protected:
	string	_name;
	int		_apcost;
	int		_damage;

public:
	AWeapon(string const & name, int apcost, int damage);
	AWeapon(AWeapon const & a1);
	~AWeapon(void);

	AWeapon&		operator=(AWeapon const & a1);
	string			getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;
};

#endif