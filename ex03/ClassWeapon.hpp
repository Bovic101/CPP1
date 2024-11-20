/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWeapon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:34:04 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 15:55:14 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWEAPON_H
#define CLASSWEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
	std::string _type;
	
	public:
	Weapon(const std::string type);
	Weapon(void);
	~Weapon();
	
	const std::string& getType() const;
	void setType(const std::string& type);
};

#endif