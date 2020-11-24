#include "ZombieEvent.hpp"

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie* one = new Zombie();
    one->set_name(name);
    return one;
}