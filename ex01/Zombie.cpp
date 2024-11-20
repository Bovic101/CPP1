/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:08:58 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 13:32:50 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
	this->_name = zombieName;
	std::cout<< "The name of ex01 Zombie baby is:"<< this->_name <<std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destroyed ex01 zombie baby:"<<this->_name <<std::endl;
}

void	Zombie::announce()
{
	std::cout <<this->_name <<" :BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
	this->_name="(default)";
	std::cout << "Unknown zombie born" << this->_name <<std::endl;
}