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
#include <math.h>
#include "Fixed.hpp"

const int Fixed::numBits = 8;

Fixed::Fixed(): fixedValue(0) {}

Fixed::Fixed(const int input) {
	fixedValue = input << numBits;
}

Fixed::Fixed(const float input) {
	fixedValue = roundf(input * (1 << numBits));
}

Fixed::Fixed(const Fixed &other) {
	fixedValue = other.fixedValue;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other) {
		fixedValue = other.fixedValue;
	}
	return *this;
}

Fixed::~Fixed() {}

void Fixed::setFixedValue(const int value) {
	fixedValue = value;
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

bool Fixed::operator>(const Fixed &other) {
	return fixedValue > other.fixedValue;
}

bool Fixed::operator>=(const Fixed &other) {
	return fixedValue >= other.fixedValue;
}

bool Fixed::operator<(const Fixed &other) {
	return fixedValue < other.fixedValue;
}

bool Fixed::operator<=(const Fixed &other) {
	return fixedValue <= other.fixedValue;
}

bool Fixed::operator==(const Fixed &other) {
	return fixedValue == other.fixedValue;
}

bool Fixed::operator!=(const Fixed &other) {
	return fixedValue != other.fixedValue;
}

Fixed Fixed::operator+(const Fixed &obj)
{
	Fixed sum;

	sum.setFixedValue(fixedValue + obj.fixedValue);
	return sum;
}

Fixed Fixed::operator-(const Fixed &obj)
{
	Fixed difference;

	difference.setFixedValue(fixedValue - obj.fixedValue);
	return difference;
}

Fixed Fixed::operator*(const Fixed &obj)
{
	Fixed sum;

	sum.setFixedValue((fixedValue * obj.fixedValue) >> numBits);
	return sum;
}

Fixed Fixed::operator/(const Fixed &obj)
{
	Fixed sum;

	sum.setFixedValue((fixedValue << numBits) / obj.fixedValue);
	return sum;
}

Fixed &Fixed::operator++()
{
	fixedValue += 1;
	return (*this);
}

Fixed &Fixed::operator--()
{
	fixedValue -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	fixedValue += 1;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	fixedValue -= 1;
	return temp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.fixedValue <= second.fixedValue) {
		return first;
	}
	return second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.fixedValue <= second.fixedValue) {
		return first;
	}
	return second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.fixedValue >= second.fixedValue) {
		return first;
	}
	return second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.fixedValue >= second.fixedValue) {
		return first;
	}
	return second;
}
