/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:03:40 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 17:47:17 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHumanA.hpp"
#include "ClassHumanB.hpp"
#include "ClassWeapon.hpp"

int main() 
{
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    {
        Weapon club("crude spiked club");
        
        HumanB jim("Jim");
        jim.Weapon_allocator(club);
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}