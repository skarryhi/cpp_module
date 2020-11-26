#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent() {
    std::cout << BOLD << CYN << " ✅  Event created" << WHT << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << BOLD << CYN << " ❌  Event delete" << WHT << std::endl;
}

Zombie* ZombieEvent::newZombie(std::string const &name) {
    Zombie* one = new Zombie();
    one->set_name(name);
    one->set_type(setZombieType());
    std::cout << BOLD << YEL << " 🧟‍  New zombie(static name, random type) created" << WHT << std::endl;
    return one;
}

std::string    ZombieEvent::setZombieType() {
    std::string const   types[9] = {
    "White",
    "Blaсk",
    "Pink",
    "Yellow",
    "Gray",
    "Green",
    "Red",
    "Blue",
    "Cyan"
    };
    return(types[rand() % 9]);
}

Zombie*     ZombieEvent::randomChump() {
    std::string const   names[11] = {
    "Alpha",
    "Beast",
    "Casanova",
    "Chieftain",
    "Clearheaded",
    "Сoolfire",
    "Commando",
    "Cowboy",
    "Detector",
    "Dragon",
    "Killer"
    };
    Zombie* one = new Zombie();
    one->set_type(setZombieType());
    one->set_name(names[rand() % 11]);
    std::cout << BOLD << YEL << " 🧟‍  New zombie(random name, random type) created" << WHT << std::endl;
    return one;
}
