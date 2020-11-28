#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
# include <iostream>
#include <fstream>
# include <iomanip>

# define WHITE	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m"
# define MAG	"\x1B[35m"
# define CYN	"\x1B[36m"
# define WHT	"\x1B[37m"
# define BOLD	"\033[1m"

class Weapon {
public:
    Weapon();
    Weapon(std::string const&);
    void        setType(std::string const&);
    std::string get_type();
private:
    std::string     type;
};

#endif