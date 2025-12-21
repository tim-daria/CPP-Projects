/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:59:03 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 15:09:13 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl log;

	if (argc != 2)
	{
		std::cerr << "Correct usage: " << argv[0] << " <level>" << std::endl;
		return 1;
	}
	std::string level = argv[1];
	log.complain(level);
}
