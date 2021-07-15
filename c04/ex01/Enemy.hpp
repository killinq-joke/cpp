/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:35 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 23:26:00 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

using namespace std;

class Enemy
{

protected:
	int		_hp;
	string	_type;
	
public:
	Enemy(int hp, string const & type);
	~Enemy(void);

	string			getType(void) const;
	int				getHP(void) const;
	void			setHP(int hp);
	virtual void	takeDamage(int);
};

#endif