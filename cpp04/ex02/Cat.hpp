/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-31 16:49:09 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-31 16:49:09 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
	Brain *brain;

	public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();

	const std::string &getIdeafromBrain(int index) const;
	void setIdeatoBrain(const std::string &idea, int index);
	virtual void makeSound() const;
};

#endif
