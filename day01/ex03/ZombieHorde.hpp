#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde {
public:
    ZombieHorde(int const&);
    ~ZombieHorde();
private:
    Zombie* horde;
};

#endif