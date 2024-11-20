/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHumanA.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:24 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 16:52:38 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSHUMANA_HPP
#define CLASSHUMANA_HPP

#include <iostream>
#include <string>
#include "ClassWeapon.hpp"

class HumanA
{
public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();
    void attack() const;

private:
    std::string _name;
    Weapon& _weapon;
};

#endif