#ifndef ALL_CLASS_HPP
# define ALL_CLASS_HPP

# include <iostream>
# include <string>
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

class Contact {
    public:
        Contact();
        void            init_contact(std::string* const& array);
        void            get_contact();
        void            get_short_contact();
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
};

class Book {
    public:
        Book();
        void        add_contact(std::string* const& array);
        void        get_book();
        int         get_places();
        void        get_contact(std::string const& index);
    private:
        Contact     list[8];
        int         places;
};


#endif
