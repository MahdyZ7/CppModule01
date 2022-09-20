/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayassin <ayassin@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:10 by ayassin           #+#    #+#             */
/*   Updated: 2022/09/20 13:08:32 by ayassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string str);
		~Zombie(void);
		void announce(void);
	
	private:
		std::string name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif