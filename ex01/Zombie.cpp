/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:52:19 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/20 13:12:02 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): name(""){};

Zombie::Zombie(std::string str): name(str){};

Zombie::~Zombie()
{
	std::cout << "The zombie " << name << " was neutralized\n";
}

void Zombie::announce(void)
{
	if (name == "Foo")
		std::cout << name;
	else
		std::cout << "<" + name + ">";
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string str)
{
	name = str;
}