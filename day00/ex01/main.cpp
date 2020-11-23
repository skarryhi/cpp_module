#include "all_class.hpp"

std::string const   fields[11] = {
    "First name",
    "Last name",
    "Nickname",
    "Login",
    "Postal address",
    "Email address",
    "Phone number",
    "Birthday date",
    "Favorite meal",
    "Underwear color",
    "Darkest secret"
};

int     main()
{
    Contact         one;
    Book            book;
    std::string     con[11];
    std::string     cmd;
    std::string     index;

    std::cout << BOLD << GRN << " 📖  Welcome to the PhoneBook" << std::endl;
    while(1) {
        std::cout << WHT << "Write the comand(ADD, SEARCH, EXIT): ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD") {
            if (book.get_places() < 8)
                for(int i = 0; i < 11; i++) {
                    std::cout << BOLD << "Enter " << fields[i] << ": ";
                    std::getline(std::cin, con[i]);
                }
            book.add_contact(con);
        }
        else if (cmd == "SEARCH") {
            if (book.get_places() == 0)
                std::cerr << RED << " 🗿  PhoneBook is empty" << WHT << std::endl;
            else {
                book.get_book();
                std::cout << "Enter the index: ";
                std::getline(std::cin, index);
                book.get_contact(index);
            }
        }
        else if (cmd == "EXIT")
            break ;
        else
            std::cerr << RED << " 🍉  Unknown command" << WHT << std::endl;
    }
    std::cout << GRN << " 🐥  Bye" << std::endl;
    return 0;
}
