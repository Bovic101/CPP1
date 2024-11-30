/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:51:10 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/30 01:07:02 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <fstream>

void newFileCreation(const std::string &filename, const std::string &str1, const std::string &str2)
{
    // Open the current file
    std::ifstream cur_file(filename);
    if (!cur_file.is_open())
    {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    // File where the output is redirected
    std::string new_filename = filename + ".replace";
    std::ofstream new_file(new_filename);
    if (!new_file.is_open())
    {
        std::cerr << "Error: Unable to create new file " << new_filename << std::endl;
        cur_file.close();
        return;
    }

    // Read each line and replace occurrences of str1 with str2
    std::string line_reader;
    while (std::getline(cur_file, line_reader))
    {
        size_t pos = 0;
        while ((pos = line_reader.find(str1, pos)) != std::string::npos)  // Corrected line
        {
            line_reader.replace(pos, str1.length(), str2);
            pos += str2.length(); // Move past the replaced part
        }

        // Write the formatted line to the new file
        new_file << line_reader << std::endl;
    }

    // Close the files
    cur_file.close();
    new_file.close();
}
