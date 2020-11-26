# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {
    std::cout << BOLD GRN "Horde created" WHT << std::endl;
}

ZombieHorde::ZombieHorde(int const& n) {
    std::string const   names[11] = {
    "Alpha",
    "Beast",
    "Casanova",
    "Chieftain",
    "Clearheaded",
    "Сoolfire",
    "Cowboy",
    "Detector",
    "Dragon",
    "Killer",
    "Mikky"
    };
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
    std::cout << BOLD GRN "Horde created" WHT << std::endl;
    horde = new Zombie[n];
    for (int i = 0; i < n; i++) {
        horde[i].set_name(names[rand() % 11]);
        horde[i].set_type(types[rand() % 9]);
        std::cout << BOLD YEL " 🧟‍  New zombie(" <<
        horde[i].give_name() << " " << horde[i].give_type() << ") created" WHT << std::endl;
        horde[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] horde;
    std::cout << BOLD GRN "Horde delete" WHT << std::endl;
}
