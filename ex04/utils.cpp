/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:51:10 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/21 10:35:02 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void newFileCreation(const std::string &filename, const std::string &str1,const std::string &str2)
{
	//To open the current file
	std::ifstream cur_file(filename);
	
	if (!cur_file.is_open())
	{
		std::cout<<"Eroor:Unable to open file" <<filename <<std::endl;
		return;
	}
	//File where the output is redirected to
	std::string new_filename = filename + ".replace";
	std::ofstream new_file(new_filename);
	//Open new_file for new string
	if (!new_file.is_open())
	{
		std::cout<<"Eroor:Unable to create new file" <<new_filename <<std::endl;
		cur_file.close();
		return;
	}
	//read each line and str1 with str2
	std::string line_reader;
	while (std::getline(cur_file, line_reader))
	{
		//Find and replace ste1 with str2
		size_t i = 0;
		while (i = line_reader.find(str1, i) != std::string::npos)
		{
			line_reader.erase(i,str1.length());
			line_reader.insert(i, str2);
			i +=str2.length();
		}
		//Write the formatted line to the newfile
		new_file <<line_reader <<std::endl;
	}
	cur_file.close();
	new_file.close();
}