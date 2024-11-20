/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:40:25 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 11:49:01 by vodebunm         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie(void);
	void  announce(void);
	void randomChump( std::string name);//create new zombie on the slack
	Zombie* newZombie( std::string name );//create zombie on the heap
};

	void randomChump( std::string name);//create zombie on the slack
	Zombie* newZombie( std::string name );//create zombie on the heap
#endif