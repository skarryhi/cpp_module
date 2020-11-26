# include "ZombieHorde.hpp"

int     main()
{
    std::srand(time(0));
    ZombieHorde* h = new ZombieHorde(5);
    delete h;
    return 0;
}