/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassHarl.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:34:51 by vodebunm          #+#    #+#             */
/*   Updated: 2024/11/21 12:00:40 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSHARL_HPP
#define CLASSHARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
	void debug(void);
	void info (void);
	void warning (void);
	void error (void);
	
	public:
	void complain(std::string level);
	
};

#endif