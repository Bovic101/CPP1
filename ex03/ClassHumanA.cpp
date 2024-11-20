/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanA.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:34:34 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 16:57:31 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "Human Constructor" <<_name <<std::endl;
}

HumanA::~HumanA()
{
    std::cout <<"Destructor";
}

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}