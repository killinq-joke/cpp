/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:47:11 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 16:43:28 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(string name);
	~FragTrap(void);

	void	highFivesGuys(void);

protected:
	int		_hitpoints;
	int		_attackpoints;
	int		_attack;
};

#endif