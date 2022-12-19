#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies = zombieHorde(10, "Joe");
	delete[] zombies;
}
