/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:21:53 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 14:55:38 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str ="HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;//referncing string str
	
	std::cout << "The memory address of the string variable is " ""<< &str <<std::endl;
	std::cout << "The memory address held by stringPTR is " ""<<stringPTR <<std::endl;
	std::cout << "The memory address held by stringREF is "" "<<&stringREF << std::endl;
	
	std::cout << "The Value of the string variable:"<< str <<std::endl;
	std::cout << "The value held by stringPTR:" << *stringPTR <<std::endl;
	std::cout << "The value held by stringREF:"<< stringREF << std::endl;
	
	return(0);
}