/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:09:48 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 13:30:01 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Function create zombies
Zombie* zombieHorde( int N, std::string name )
{
	Zombie* nZombie = new Zombie[N];//allocate memory to N zombies
	
	int i =0; //initialise each of zombie with a name
	while (i < N)
	{
		nZombie[i] = Zombie(name);//call constructor for each zombie
		++i;
	}
	return(nZombie);
}