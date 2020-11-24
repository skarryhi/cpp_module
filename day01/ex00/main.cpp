#include "Pony.hpp"

void    ponyOnTheHeap() {
    Pony *ponyOnTheHeap = new Pony("Lally", "White", 3);
    ponyOnTheHeap->pony_story();
    delete ponyOnTheHeap;
}

void    ponyOnTheStack() {
    Pony    ponyOnTheStack;
    ponyOnTheStack.pony_story();
}

int     main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}