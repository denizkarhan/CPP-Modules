#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(){}

Zombie::~Zombie(){}

void		Zombie::setName(std::string name)
{
	this->name = name;
}

std::string	Zombie::getName()
{
	return (this->name);
}

void	announce(std::string name)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie		*zombies;
	int			i;

	zombies = new Zombie[N];
	for (i = 0 ; i < N ; i++)
		zombies[i].setName(name);
	for (i = 0 ; i < N ; i++)
		announce(zombies[i].getName());
	return (zombies);
}
