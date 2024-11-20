/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanB.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:55 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 17:06:09 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSHUMANB_HPP
#define CLASSHUMANB_HPP

#include <iostream>
#include <string>
#include "ClassWeapon.hpp"

class HumanB
{
public:
    HumanB(const std::string& name);
    ~HumanB();
    void attack() const;
	void Weapon_allocator(Weapon &weapon);

private:
    std::string _name;
    Weapon* _weapon;
};

#endif