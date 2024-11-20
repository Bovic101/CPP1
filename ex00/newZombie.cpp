/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:38:37 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 11:50:53 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie* newZombie( std::string name )
 {
	Zombie* zombieptr;
	zombieptr = new Zombie(name);
	return(zombieptr);
 }