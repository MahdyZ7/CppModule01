#include "HumanB.hpp"

HumanB::HumanB(std::string str){
	name = str;
	in_hand = NULL;
	std::cout << "HumanB " << name << " is born with empty hands\n";
}

HumanB::~HumanB(void)
{
	std::cout << "human " << name << " has died\n";
}

void HumanB::attack(void)
{
	if (in_hand)
		std::cout << name << " attacks with thier " << in_hand->getType() << std::endl;
	else
		std::cout << name << " attacks with thier hands\n";
}

void HumanB::setWeapon(Weapon &wep)
{
	in_hand = &wep;
}