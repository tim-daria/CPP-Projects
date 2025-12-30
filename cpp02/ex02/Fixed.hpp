/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:45:54 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/23 17:00:07 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


class Fixed {
	private:
	int fixedValue;
	static const int numBits;

	private:
	void setFixedValue(const int value);

	public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed &other);
	~Fixed();

	Fixed &operator=(const Fixed &other);
	bool operator>(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator<(const Fixed &other);
	bool operator<=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator!=(const Fixed &other);

	Fixed operator+(const Fixed &obj);
	Fixed operator-(const Fixed &obj);
	Fixed operator*(const Fixed &obj);
	Fixed operator/(const Fixed &obj);
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);

	float toFloat(void) const;
	int toInt(void) const;
};

#endif
