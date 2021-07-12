/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <ztouzri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/12 22:38:15 by ztouzri          ###   ########.fr       */
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

Fixed::Fixed(int const value) : _value(value)
{
	cout << "Copy constructor called" << endl;
};

Fixed::Fixed(const Fixed& f1) : _value(f1._value)
{
	cout << "Copy constructor called" << endl;
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
	cout << "getRawBits member function called" << endl;
	return (this->_value);
}