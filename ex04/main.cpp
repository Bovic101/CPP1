/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:42:15 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/21 11:01:20 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Usage: " << argv[0] << " <filename> <str1> <str2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3]; // Corrected this to use argv[3]

    // My function to do character replacement
    newFileCreation(filename, str1, str2);

    return 0;
}
