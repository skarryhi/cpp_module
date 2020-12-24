#include "Sorcerer.hpp"
#include "Peon.hpp"
# include "Victim.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    
    Sorcerer ro = robert;
    std::cout << ro;
    Victim ji = jim;
    ro.polymorph(ji);
    return 0;
}