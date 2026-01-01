/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:44:34 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/23 16:58:58 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits.h>
#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c = a / b;
	std::cout << c << std::endl;
	c = Fixed(0);
	std::cout << a << " / " << c << " = " << (a / c) << std::endl;
	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != c) << std::endl;
	std::cout << (a < c)  << std::endl;
	std::cout << (c > a)  << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a >= b) << std::endl;

	return 0;
}
