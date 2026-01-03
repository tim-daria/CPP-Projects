/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 11:50:21 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-03 11:50:21 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
	std::string type;

	public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	const std::string &getType() const;
	void makeSound() const;
};

#endif
