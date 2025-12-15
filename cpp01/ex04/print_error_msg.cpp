/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error_msg.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:47:53 by dtimofee          #+#    #+#             */
/*   Updated: 2025/12/15 12:51:40 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_error_msg.hpp"

int print_err_msg(std::string msg)
{
	std::cerr << msg << std::endl;
	return 1;
}
