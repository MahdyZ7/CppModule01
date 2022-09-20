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

	int size = 3;
	std::cout <<  "\nCreating a Zombie horde\n";
	Zombie *altman = zombieHorde(size, "jensen");
	for (int i = 0; i < size; ++i)
	{
		std::cout << i << " ";
		altman[i].announce();
	}
	delete [] altman;

	std::cout <<  "\nCreating a Zombie called Foo\n";
	Zombie brian("Foo");
	brian.announce();
	return (0);
}