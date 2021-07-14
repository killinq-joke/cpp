/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:52:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 14:40:00 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

using namespace std;

class	ClapTrap
{

public:
	ClapTrap(void);
	ClapTrap(string name);
	~ClapTrap(void);

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:
	string	_name;
	int		_hitpoints;
	int		_energypoints;
	int		_attackdamage;
};
#endif