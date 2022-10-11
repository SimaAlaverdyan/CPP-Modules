#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main(void)
{
    Zombie *z1;

    z1 = newZombie("Zombik2 from heap");
    z1->announce();

    randomChump("Zombik1 from stack");

    delete (z1);
    return (0);
}