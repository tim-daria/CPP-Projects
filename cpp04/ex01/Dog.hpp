/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-31 16:47:40 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-31 16:47:40 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
	Brain *brain;

	public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	const std::string &getIdeafromBrain(int index) const;
	void setIdeatoBrain(const std::string &idea, int index);
	virtual void makeSound() const;
};

#endif
