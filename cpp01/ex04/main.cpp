/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtimofee <dtimofee@student.42berlin.de>    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-12-14 11:55:15 by dtimofee          #+#    #+#             */
/*   Updated: 2025-12-14 11:55:15 by dtimofee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "replace.hpp"

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string text;
	std::string newFileName = ".replace";

	if (filename.size() == 0 || s1.size() == 0 || s2.size() == 0)
	{
		std::cerr << "Parameters can not be empty" << std::endl;
		return 1;
	}
	if (!std::ifstream (filename))
	{
		std::cerr << "File does not exist" << std::endl;
	}
	std::ifstream myReadFile(filename);
	std::ofstream myWriteFile(filename + newFileName);

	while (getline(myReadFile, text))
	{
		std::string new_text = replace_str(text, s1, s2);
		myWriteFile << new_text << std::endl;
	}
	myReadFile.close();
	myWriteFile.close();
}
