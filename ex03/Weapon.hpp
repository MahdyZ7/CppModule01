#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string str);
		~Weapon(void);
		std::string& getType(void);
		void setType(std::string str);
	private: 
		std::string type;
};
#endif