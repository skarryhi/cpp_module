#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
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

class Fixed {
public:
    Fixed();
    Fixed(Fixed const &);
    ~Fixed();
    Fixed&              operator= (Fixed const &);
    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
private:
    int                 fixed;
    static const int    nb = 8;
};

#endif