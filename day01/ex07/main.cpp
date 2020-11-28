# include "class.hpp"

int     main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << RED BOLD "Wrong number of arguments" << std::endl;
        return 1;
    }
    Sed process(av[1], av[2], av[3]);
    if (process.check())
        return 1;
    if (process.replace())
        return 1;
    return 0;
}