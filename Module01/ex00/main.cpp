#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

int main(void)
{
    Zombie  *zombi1 = newZombie("Ahmet");
    zombi1->announce();
    randomChump("Mehmet");
    delete(zombi1);
    return (0);
}
