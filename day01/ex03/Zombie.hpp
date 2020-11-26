#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

# define WHITE	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m" //темный
# define MAG	"\x1B[35m" //сиреневый
# define CYN	"\x1B[36m" //светлый
# define WHT	"\x1B[37m"
# define BOLD	"\033[1m"

class Zombie {
    public:
        Zombie();
        void            announce();
        void            set_name(std::string const &name);
        void            set_type(std::string const &type);
        std::string     give_name();
        std::string     give_type();
        ~Zombie();
    private:
        std::string     name;
        std::string     type;
};

#endif