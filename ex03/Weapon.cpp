#include "Weapon.hpp"

Weapon::Weapon(std::string str):type(str){
	std::cout << "The Wepon " << str << " was created\n";
};

Weapon::~Weapon()
{
	std::cout << "The weapon " << type << " has been destroyed\n";
}

std::string& Weapon::getType(void)
{
	return(type);
}

void Weapon::setType(std::string str)
{
	type = str;
}