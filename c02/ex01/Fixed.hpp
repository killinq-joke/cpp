/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:37 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/13 15:38:23 by mout             ###   ########.fr       */
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
	Fixed(float const value);
	Fixed(const Fixed &f1);
	~Fixed(void);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed&		operator=(Fixed const & f1);

private:
	int					_value;
	float				_fvalue;
	static int const	_numbits;
};

ostream&	operator<<(ostream& o, Fixed const & f1);

#endif