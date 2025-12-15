/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:59:03 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 14:45:00 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl log;

	log.complain("DEBUG");
	log.complain("INFO");
	log.complain("WARNING");
	log.complain("ERROR");
	log.complain("WARNING");
}
