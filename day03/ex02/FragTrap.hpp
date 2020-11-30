#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap();
    FragTrap(FragTrap const &);
    FragTrap(std::string const &);
    ~FragTrap();
    int         vaulthunter_dot_exe(std::string const & target);
};

#endif
