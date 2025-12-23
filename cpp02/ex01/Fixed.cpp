/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:48:39 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/23 17:01:02 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Fixed.hpp"

const int numBits = 8;

Fixed::Fixed(): fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	fixedValue = input * 2^numBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float input)
{
	fixedValue = input * 2^numBits;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	fixedValue = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		fixedValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedValue);
}

void Fixed::setRawBits( int const raw ) {
	fixedValue = raw;
}
