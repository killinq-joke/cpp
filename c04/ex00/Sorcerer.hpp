/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:49:19 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/15 17:18:48 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>

using namespace std;
class Sorcerer
{

public:
	Sorcerer(string name, string title);
	~Sorcerer();

	string	introduce(bool) const;

private:
	string	_name;
	string	_title;
};

ostream&	operator<<(ostream& o, Sorcerer const & sorc);

#endif