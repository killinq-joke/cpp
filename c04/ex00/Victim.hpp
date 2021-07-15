/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:43 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 19:45:32 by ztouzri          ###   ########.fr       */
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
	Victim(Victim const &);
	~Victim(void);

	string			getName(void) const;
	string			introduce(bool isOstream) const;
	virtual void	getPolymorphed(void) const;
	virtual Victim&	operator=(Victim const & v1);

protected:
	string	_name;

};

ostream&	operator<<(ostream& o, Victim const & v1);

#endif