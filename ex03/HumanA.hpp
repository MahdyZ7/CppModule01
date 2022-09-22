#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
	public:
		HumanA(std::string str, Weapon &wep);
		~HumanA(void);
		void attack(void);
	private:
			Weapon *in_hand;
			std::string name;
};

#endif