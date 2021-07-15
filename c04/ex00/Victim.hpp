/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:59:51 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

using namespace std;

class Victim
{

public:
	Victim(string name);
	~Victim(void);

	string	getName(void) const;
	void	introduce(void) const;
	virtual void	getPolymorphed(void) const;

protected:
	string	_name;

};

#endif