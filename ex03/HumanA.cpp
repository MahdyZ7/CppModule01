#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wep){
	name = str;
	in_hand = &wep;
	std::cout << "HumanA " << name << " is born with " << wep.getType();
	std::cout << " in his hand\n";
}

HumanA::~HumanA(void)
{
	std::cout << "human " << name << " has died\n";
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with thier " << in_hand->getType() << std::endl;
}