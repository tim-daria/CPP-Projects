/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-14 14:16:29 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-14 14:16:29 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace_str(std::string text, std::string s1, std::string s2)
{
	std::string newText = "";
	int i = 0;
	int s1Len = s1.length();
	size_t pos = text.find(s1);
	if (pos == std::string::npos)
		return text;
	while (pos != std::string::npos)
	{
		newText += text.substr(i, pos - i) + s2;
		i = pos + s1Len;
		pos = text.find(s1, i);
	}
	newText += text.substr(i);
	return newText;
}
	// while ((pos = text.find(s1)) != std::string::npos)
	// {
	// 	text = (text.substr(0, pos) + s2 + text.substr(pos + s1.length()));
	// }
	// return text;
