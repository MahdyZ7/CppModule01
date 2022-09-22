#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
	public:
		HumanB(std::string str);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &wep);
	private:
			Weapon *in_hand;
			std::string name;
};

#endif