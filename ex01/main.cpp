/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:07:32 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 14:00:23 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 9; //No. of zombies in thehorde
	std::string name = "Victor";

	Zombie* horde =zombieHorde(N, name);//creating horde
	int i =0; //iterate to make zombie announce itself

	while (i < N)
	{
		horde[i].announce();
		++i;
	}
	delete[] horde;
	return(0);
}