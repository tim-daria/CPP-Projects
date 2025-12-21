/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:59:09 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 15:15:02 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\n I cannot believe adding extra bacon costs more money.\n You didn't put enough bacon in my burger!\n If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n I think I deserve to have some extra bacon for free.\n I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\n This is unacceptable!\n I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int index;
	if (level == "DEBUG")
		index = 1;
	else if (level == "INFO")
		index = 2;
	else if (level == "WARNING")
		index = 3;
	else if (level == "ERROR")
		index = 4;
	else
		index = 0;
	switch (index){
		case 0:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 1:
			Harl::debug();
		case 2:
			Harl::info();
		case 3:
			Harl::warning();
		case 4:
			Harl::error();
			break;
	}
}
