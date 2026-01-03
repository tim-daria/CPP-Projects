/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-03 12:55:36 by dtimofee          #+#    #+#             */
/*   Updated: 2026-01-03 12:55:36 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "Default";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Copy assignment operator Brain called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Destructor Brain called" << std::endl;
}

const std::string& Brain::getIdea(int index) const {
	return ideas[index];
}

void Brain::setIdea(const std::string &idea, int index) {
	ideas[index] = idea;
}
