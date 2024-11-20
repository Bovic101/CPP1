/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:09:15 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 13:30:23 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string _name;

	public:
	Zombie();//default construcctor
	Zombie(std::string name);
	~Zombie(void);
	void  announce(void);
};

Zombie* zombieHorde( int N, std::string name );
void randomChump( std::string name);//create zombie on the slack
Zombie* newZombie( std::string name );//create zombie on the heap
#endif