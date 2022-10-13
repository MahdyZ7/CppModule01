#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	int pnt = 0;

	
	if (level == "DEBUG")
		pnt = 1;
	else if (level == "INFO")
		pnt = 2;
	else if (level == "WARNING")
		pnt = 3;
	else if (level == "ERROR")
		pnt = 4;

	if (pnt)
		std::cout<< "[ " << level << " ]\n";
	else
		std::cout<< "[ Probably complaining about insignificant problems ]\n";
	switch (pnt)
		{
			case (1):
				this->debug();
				 // [[fallthrough]];
			case (2):
				this->info();
			 // [[fallthrough]];
			case(3):
				this->warning();
			// [[fallthrough]];
			case (4):
				this->error();
				break;				
		}
}