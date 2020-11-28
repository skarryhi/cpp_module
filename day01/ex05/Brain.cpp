# include "Brain.hpp"

Brain::Brain() {
    this->mass = rand();
}

std::string     Brain::identify() const {
    std::ostringstream os;

    os << this;
    return (os.str());
}