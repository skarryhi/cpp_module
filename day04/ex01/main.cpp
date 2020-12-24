#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << std::endl;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << std::endl;
    me->equip(pr);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << std::endl;
    me->attack(b);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << std::endl;
    me->attack(b);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << std::endl;
    me->attack(b);
    std::cout << *me;
    std::cout << "ENEMY hp " << b->getHP() << "\n\n" << std::endl;


    {
        Character* me = new Character("me");
        std::cout << *me;
        Enemy* b = new SuperMutant();
        AWeapon* pr = new PlasmaRifle();
        AWeapon* pf = new PowerFist();
        me->equip(pr);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
        me->equip(pf);
        me->attack(b);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
        me->equip(pr);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
        me->attack(b);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
        me->attack(b);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
        me->attack(b);
        std::cout << *me;
        std::cout << "ENEMY hp " << b->getHP() << std::endl;
    }
    return 0;
}