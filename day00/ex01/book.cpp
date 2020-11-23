#include "all_class.hpp"

Book::Book() {
    places = 0;
}

void        Book::add_contact(std::string* const& array) {
    if (places >= 8) {
        std::cout << " 💥  The place is over..." << std::endl;
        return;
    }
    list[places].init_contact(array);
    ++places;
    std::cout << BOLD << CYN << " ✅  Contact added" << std::endl;
}

void        Book::get_book() {
    std::cout <<
    '|' << YEL << std::setw(10) << "Index" << WHT <<
    '|' << YEL << std::setw(10) << "First name" << WHT <<
    '|' << YEL << std::setw(10) << "Last name" << WHT <<
    '|' << YEL << std::setw(10) << "Nickname" << WHT << '|' << std::endl;
    for (int i = 0; i < places; i++) {
        std::cout << '|' << std::setw(10) << (i + 1);
        list[i].get_short_contact();
    }
}

int         Book::get_places() {
    return places;
}

void        Book::get_contact(std::string const& index) {
    try {
        int id = std::stoi(index) - 1;
        if (id >= 0 && id < places) {
            std::cout << GRN << " 🆔  Your contact:" << WHT <<std::endl;
            list[id].get_contact();
        }
        else
            throw std::exception();
    } catch (std::exception const &e) {
        std::cerr << RED << " ❌  Invalid index" << WHT << std::endl;
    }
}
