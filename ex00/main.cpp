/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:37:23 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/20 11:51:19 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newbaby = newZombie("heapZombie");
	newbaby->announce();
	randomChump("stackZombie");
	delete newbaby;
}
