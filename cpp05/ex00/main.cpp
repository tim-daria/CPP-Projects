/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:44:17 by dtimofee          #+#    #+#             */
/*   Updated: 2026/05/08 12:02:47 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat Sam("Sam", 100);
		Bureaucrat Paul("Paul", 1);
		Bureaucrat Martin(Paul);

		std::cout << Sam << Paul << Martin;
		Sam.incrementGrade();
		Paul.decrementGrade();
		std::cout << Sam << Paul << Martin;
		Paul = Sam;
		std::cout << Sam << Paul << Martin;
		Martin.incrementGrade();
		Martin.decrementGrade();
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
