#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
public:
    Brain const&    getBrain();
    std::string     identify() const;
private:
    Brain           brain;
};

#endif