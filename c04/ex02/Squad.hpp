/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:49:27 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/16 21:41:46 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include <iostream>

using namespace std;

class Squad : public ISquad
{

public:
	Squad(void);
	~Squad(void);

private:
	int				_count;
	//ISpaceMarine	*units;
	vector<ISpaceMarien>	_units;
};

#endif