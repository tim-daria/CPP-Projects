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


class Fixed {
	private:
	int fixedValue;
	static const int numBits;

	public:
	Fixed();
	Fixed(const int input);
	Fixed(const float input);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
