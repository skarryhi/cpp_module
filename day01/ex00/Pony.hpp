#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
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

class Pony {
public:
    Pony();
    Pony(std::string const &, std::string const &, int);
    void    pony_story();
    ~Pony();
private:
    std::string     name;
    std::string     color;
    std::string     birthplace;
    int             old;
};

#endif
