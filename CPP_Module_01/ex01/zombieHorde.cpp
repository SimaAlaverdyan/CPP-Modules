#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
        std::cout << "Zombie number error" << std::endl;
    
    Zombie *zombs = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombs[i].set_name(name);
    return (zombs);
}