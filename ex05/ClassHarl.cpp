/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHarl.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:13:39 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/21 13:00:13 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHarl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning ()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears whereas you started working here since last month." <<std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

//Function to call the private member function

void Harl::complain(std::string level)
{
	void(Harl::*caller[])(void)=
	{
		&Harl::debug,
		&Harl::info,
		&Harl::error,
		&Harl::warning,
		
	};
	std::string alert[] = {"DEBUG", "INFO","WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (alert[i] == level)
		{
			//This call the matched function
			(this->*caller[i])();
			return;
		}
	}
	std::cout << "Unknown level:" <<level <<std::endl;
}