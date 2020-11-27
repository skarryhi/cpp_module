
#include "Human.hpp"

Brain const&    Human::getBrain() {
    return brain;
}

std::string     Human::identify() const {
    return (brain.identify());
}