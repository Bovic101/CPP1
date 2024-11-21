/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:13:28 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/21 13:00:59 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassHarl.hpp"

int main()
{
	Harl call;

	call.complain("DEBUG");
	call.complain("INFO");
	call.complain("WARNING");
	call.complain("ERROR");
	call.complain("Enter Correct Level");
	
	return(0);
}