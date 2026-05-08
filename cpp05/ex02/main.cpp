/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:44:17 by dtimofee          #+#    #+#             */
/*   Updated: 2026/05/08 13:06:49 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "forms/ShrubberyCreationForm.hpp"
#include "forms/RobotomyRequestForm.hpp"
#include "forms/PresidentialPardonForm.hpp"

int main(void)
{
	try {
		Bureaucrat Sam("Sam", 147);
		Bureaucrat Paul("Paul", 1);

		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm rob("kitchen");
		PresidentialPardonForm president("You");

		std::srand(std::time(0));
		std::cout << Sam << Paul;
		Paul.signForm(president);
		Paul.executeForm(president);
		Sam.incrementGrade();
		Paul.decrementGrade();
		std::cout << Sam << Paul;
		Paul.executeForm(shrub);
		Sam.signForm(shrub);
		Paul.signForm(shrub);
		Paul.signForm(rob);
		Sam.executeForm(rob);
		Paul.executeForm(rob);
		Paul = Sam;
		std::cout << Sam << Paul;
		for (int i = 0; i < 10; i++) {
			Sam.incrementGrade();
		}
		std::cout << Sam << Paul;
		Sam.executeForm(shrub);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
