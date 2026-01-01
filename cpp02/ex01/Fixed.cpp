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
#include <string>
#include "Fixed.hpp"

const int Fixed::numBits = 8;

Fixed::Fixed(): fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	fixedValue = input << numBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	fixedValue = roundf(input * (1 << numBits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	fixedValue = other.fixedValue;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		fixedValue = other.fixedValue;
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	float result = static_cast<float>(fixedValue) / (1 << numBits);
	return (result);
}

int Fixed::toInt(void) const
{
	int result = fixedValue >> numBits;
	return (result);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
