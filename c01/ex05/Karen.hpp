/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:40:09 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/12 17:31:22 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <map>

using namespace std;

class Karen;

typedef void (Karen::*t_fnptr)(void);

class Karen {

public:
	Karen(void);
	~Karen(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	complain(string level);
	

private:
	string	fctstring[4];
};


#endif