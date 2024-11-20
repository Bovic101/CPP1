/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWeapon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:33:30 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 16:14:38 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassWeapon.hpp"

Weapon::Weapon(std::string type):_type(type)
{
	std::cout<<"Contructor"<< std::endl;
}

Weapon::Weapon(void)
{
	std::cout << "Defaulte Constructor" << std::endl;
}

Weapon ::~Weapon(void)
{
	std::cout <<"Default Destructor" << std::endl;
}

const std::string& Weapon::getType() const
{
	return(_type);
}

void Weapon::setType(const std::string& type)
{
	_type= type;
}

