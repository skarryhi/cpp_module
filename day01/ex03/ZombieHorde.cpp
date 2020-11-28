# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int const& n) {
    std::cout << BOLD GRN "Horde created" WHT << std::endl;
    horde = new Zombie[n];
    for (int i = 0; i < n; i++) {
        std::cout << BOLD YEL " 🧟‍  New zombie(" <<
        this->horde[i].getName() << " " << this->horde[i].getType() << ") created" WHT << std::endl;
        this->horde[i].announce();
    }
}

ZombieHorde::~ZombieHorde() {
    delete [] horde;
    std::cout << BOLD GRN "Horde delete" WHT << std::endl;
}
