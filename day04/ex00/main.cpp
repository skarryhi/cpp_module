#include "Sorcerer.hpp"

std::ostream& operator<<(std::ostream &out, const Sorcerer &point)
{
    out << "I am " << point.getName() << ", " << point.getTitle() << ", and I like ponies!";
    return out;
}

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    // Victim jim("Jimmy");
    // Peon joe("Joe");
    std::cout << robert;
    // robert.polymorph(jim);
    // robert.polymorph(joe);
    return 0;
}