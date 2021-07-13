/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/13 15:37:31 by mout             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using namespace std;

const int	Fixed::_numbits = 8;

Fixed::Fixed(void)
{
	cout << "Default constructor called" << endl;
	this->_value	= 0;
}

Fixed::Fixed(int const value) : _value(value), _fvalue(value)
{
	cout << "Int constructor called" << endl;
};

Fixed::Fixed(float const value) : _value(value), _fvalue(value)
{
	cout << "Float constructor called" << endl;
};

Fixed::Fixed(const Fixed& f1)
{
	cout << "Copy constructor called" << endl;
	this->setRawBits(f1.getRawBits());
	this->_fvalue = f1._fvalue;
};

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
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

Fixed&	Fixed::operator=(Fixed const & f1)
{
	cout << "Assignation operator called" << endl;
	this->_value = f1.getRawBits();
	this->_fvalue = f1._fvalue;

	return (*this);
}

ostream&	operator<<(ostream& o, Fixed const & f1)
{
	o << f1.toFloat();
	return (o);
}
