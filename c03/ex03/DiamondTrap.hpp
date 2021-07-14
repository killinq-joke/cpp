/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:06:23 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/14 18:04:32 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
	DiamondTrap(string name);
	~DiamondTrap(void);

	void	attack(string const & target) { ScavTrap::attack(target); };
	void	displaystats(void);
private:
	string	_name;
	int		_attackdamage;
	int		_hitpoints;
	int		_energypoints;
};

#endif