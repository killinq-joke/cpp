/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/13 13:50:52 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

using namespace std;

class Fixed
{
public:
	Fixed(void);
	Fixed(int const value);
	Fixed(const Fixed &f1);
	~Fixed(void);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed&	operator=(Fixed const & f1);

private:
	int					_value;
	static int const	_numbits;
};


#endif