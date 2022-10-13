#include "Harl.hpp"

int main(int ac, char** av)
{
	if (ac == 2)
	{
		Harl a;
		a.complain(av[1]);
	}
	return (0);
}