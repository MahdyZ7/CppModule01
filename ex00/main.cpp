/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:56:25 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/20 13:13:48 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout <<  "Creating a Zombie called Ahmed\n";
	Zombie ahmed("Ahmed");
	ahmed.announce();
	
	std::cout <<  "\nCreating a Zombie using newZombie\n";
	Zombie *altman = newZombie("Ole");
	altman->announce();
	delete altman;

	std::cout <<  "\nCreating a Zombie using randomChump\n";
	randomChump("pale'n'greeny");

	std::cout <<  "\nCreating a Zombie called Foo\n";
	Zombie brian("Foo");
	brian.announce();
}