#include "all_class.hpp"

Contact::Contact() : first_name("no data"),
        last_name("no data"),
        nickname("no data"),
        login("no data"),
        postal_address("no data"),
        email_address("no data"),
        phone_number("no data"),
        birthday_date("no data"),
        favorite_meal("no data"),
        underwear_color("no data"),
        darkest_secret("no data") {}

void        Contact::init_contact(std::string* const& array) {
    if (!array[0].empty())
        first_name = array[0];
    if (!array[1].empty())
        last_name = array[1];
    if (!array[2].empty())
        nickname = array[2];
    if (!array[3].empty())
        login = array[3];
    if (!array[4].empty())
        postal_address = array[4];
    if (!array[5].empty())
        email_address = array[5];
    if (!array[6].empty())
        phone_number = array[6];
    if (!array[7].empty())
        birthday_date = array[7];
    if (!array[8].empty())
        favorite_meal = array[8];
    if (!array[9].empty())
        underwear_color = array[9];
    if (!array[10].empty())
        darkest_secret = array[10];
}

void        Contact::get_contact() {
    std::cout << "First name:     | " << first_name << std::endl;
    std::cout << "Last name:      | " << last_name << std::endl;
    std::cout << "Nickname:       | " << nickname << std::endl;
    std::cout << "Login:          | " << login << std::endl;
    std::cout << "Postal address: | " << postal_address << std::endl;
    std::cout << "Email address:  | " << email_address << std::endl;
    std::cout << "Phone number:   | " << phone_number << std::endl;
    std::cout << "Birthday date:  | " << birthday_date << std::endl;
    std::cout << "Favorite meal:  | " << favorite_meal << std::endl;
    std::cout << "Underwear color:| " << underwear_color << std::endl;
    std::cout << "Darkest secret: | " << darkest_secret << std::endl << std::endl;
}

void        Contact::get_short_contact() {
    std::cout <<
    '|' << std::setw(10) << first_name <<
    '|' << std::setw(10) << last_name <<
    '|' << std::setw(10) << nickname << '|' <<
    std::endl;
}

std::string&    Contact::get_first_name() {
    return first_name;
}

std::string&    Contact::get_last_name() {
    return last_name;
}

std::string&    Contact::get_nickname() {
    return nickname;
}