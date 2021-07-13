/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mout <mout@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:26:34 by ztouzri           #+#    #+#             */
/*   Updated: 2021/07/13 13:58:57 by mout             ###   ########.fr       */
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

Fixed::Fixed(const Fixed& f1)
{
	cout << "Copy constructor called" << endl;
	this->setRawBits(f1.getRawBits());
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

Fixed&	Fixed::operator=(Fixed const & f1)
{
	cout << "Assignation operator called" << endl;
	this->_value = f1.getRawBits();

	return (*this);
}