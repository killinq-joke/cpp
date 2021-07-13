/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/13 17:29:51 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using namespace std;

const int	Fixed::_numbits = 8;

Fixed::Fixed(void)
{
	this->_value	= 0;
	this->_fvalue	= 0;
}

Fixed::Fixed(int const value) : _value(value), _fvalue(value)
{
};

Fixed::Fixed(float const value) : _value(value), _fvalue(value)
{
};

Fixed::Fixed(const Fixed& f1)
{
	this->setRawBits(f1.getRawBits());
	this->_fvalue = f1._fvalue;
};

Fixed::~Fixed(void)
{
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

int	Fixed::toInt() const
{
	return (this->_value);
}

float	Fixed::toFloat() const
{
	return (this->_fvalue);
}

float	Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1._fvalue > f2._fvalue)
		return (f1._fvalue);
	else
		return (f2._fvalue);
}

Fixed&	Fixed::operator=(Fixed const & f1)
{
	cout << "Assignation operator called" << endl;
	this->_value = f1.getRawBits();
	this->_fvalue = f1._fvalue;

	return (*this);
}

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	this->_fvalue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	
	++*this;
	return (tmp);
}

Fixed	operator*(Fixed const & f1, Fixed const & f2)
{
	Fixed	mult(f1.toFloat() * f2.toFloat());

	return (mult);
}

bool		operator<(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() < f2.toFloat());
}

bool		operator>(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() > f2.toFloat());
}

bool		operator<=(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() <= f2.toFloat());
}

bool		operator>=(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() >= f2.toFloat());
}

bool		operator==(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() == f2.toFloat());
}

bool		operator!=(Fixed const & f1, Fixed const & f2)
{
	return (f1.toFloat() != f2.toFloat());
}

ostream&	operator<<(ostream& o, Fixed const & f1)
{
	o << f1.toFloat();
	return (o);
}
