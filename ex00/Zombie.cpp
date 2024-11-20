/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:39:59 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 11:47:47 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
	this->_name = zombieName;
	std::cout<< "The name of new Zombie baby is:"<< this->_name <<std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destroyed zombie baby:"<<this->_name <<std::endl;
}

void	Zombie::announce()
{
	std::cout <<this->_name <<" :BraiiiiiiinnnzzzZ..." << std::endl;
}
