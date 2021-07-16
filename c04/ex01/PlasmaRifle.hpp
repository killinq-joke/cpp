/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:06:42 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 16:06:08 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class	PlasmaRifle : virtual public AWeapon
{

public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	
	virtual void	attack(void) const;
};

#endif