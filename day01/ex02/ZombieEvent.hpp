#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
public:
    ZombieEvent();
    std::string     setZombieType();
    Zombie*         randomChump();
    Zombie*         newZombie(std::string const &name);
    ~ZombieEvent();
};

#endif