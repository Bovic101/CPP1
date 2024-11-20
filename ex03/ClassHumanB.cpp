/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanB.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:32 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 17:53:53 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHumanB.hpp"

HumanB::HumanB(const std::string& name):_name(name), _weapon(nullptr)
{
	std::cout <<"HumanB constructor for " <<_name <<std::endl;
}

void HumanB::Weapon_allocator(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const {
    if (_weapon) 
	{
        std::cout << _name << " attacks with their" << _weapon->getType() << std::endl;
    } 
	else 
	{
        std::cout << _name << " has no weapon to attack with!" << std::endl;
    }
}

HumanB::~HumanB() 
{
    std::cout << "HumanB destructor for " << _name << std::endl;
}