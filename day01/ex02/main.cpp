#include "ZombieEvent.hpp"

int     main()
{
    std::srand(time(0));
    ZombieEvent* event = new ZombieEvent();
    Zombie* one = event->randomChump();
    one->announce();
    delete one;
    Zombie* two = event->newZombie("Mikky");
    two->announce();
    delete two;
    delete event;
    return 0;
}