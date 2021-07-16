/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:29 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 03:39:27 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

private:
	string	_name;
	int		_ap;
	AWeapon	*_weapon;

public:
	Character(string const & name);
	~Character(void);

	void	recoverAP(void);
	void	equip(AWeapon*);
	void	attack(Enemy*);
	bool	isWeaponEquipped(void) const;
	string	getName(void) const;
	string	getWeaponName(void) const;
	int		getAP(void) const;
	void	setAP(int ap);

};

ostream&	operator<<(ostream& o, Character const & c1);

#endif