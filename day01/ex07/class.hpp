#ifndef CLASS_HPP
# define CLASS_HPP

#include <string>
# include <iostream>
# include <iomanip>
# include <fstream>

# define WHITE	"\x1B[0m"
# define RED	"\x1B[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define BLU	"\x1B[34m" //темный
# define MAG	"\x1B[35m" //сиреневый
# define CYN	"\x1B[36m" //светлый
# define WHT	"\x1B[37m"
# define BOLD	"\033[1m"

class Sed {
    public:
        Sed(std::string const &, std::string const &, std::string const &);
        int check();
        int replace();
        ~Sed();
    private:
        std::string     fileNewName;
        std::ifstream   fileOld;
        std::string     s1;
        std::string     s2;
};

#endif