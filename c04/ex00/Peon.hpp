/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:29 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 19:52:17 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim
{

public:
	Peon(string name);
	Peon(Peon const &);
	~Peon();

	virtual void	getPolymorphed(void) const;
	Peon&			operator=(Peon const &p1);

private:

};


#endif