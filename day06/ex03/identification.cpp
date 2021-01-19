#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base*   generate(void) {
    Base* base;

    int i = rand() % 3;
    if (i == 0)
        base = new A;
    if (i == 1)
        base = new B;
    if (i == 2)
        base = new C;
    return base;
}

void identify_from_pointer(Base* p) {
    A* baseA = dynamic_cast<A *>(p);
    B* baseB = dynamic_cast<B *>(p);
    C* baseC = dynamic_cast<C *>(p);

    if(!baseA && !baseB)
        std::cout << "Type C" << std::endl;
    if(!baseA && !baseC)
        std::cout << "Type B" << std::endl;
    if(!baseC && !baseB)
        std::cout << "Type A" << std::endl;
    
}

void identify_from_reference(Base& p) {
    A* baseA = dynamic_cast<A *>(&p);
    B* baseB = dynamic_cast<B *>(&p);
    C* baseC = dynamic_cast<C *>(&p);

    if(!baseA && !baseB)
        std::cout << "Type C" << std::endl;
    if(!baseA && !baseC)
        std::cout << "Type B" << std::endl;
    if(!baseC && !baseB)
        std::cout << "Type A" << std::endl;
}

int     main() {
    std::srand(time(0));
    Base* base;

    base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    return 0;
}