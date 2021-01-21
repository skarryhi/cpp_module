#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.pop();
    mstack.pop();
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(8);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "begin: " << *it << std::endl;
    std::cout << "end: " << *ite << std::endl;
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    {
        MutantStack<int> copystack(mstack);
        MutantStack<int>::iterator t = copystack.begin();
        MutantStack<int>::iterator te = copystack.end();
        while (t != te) {
            std::cout << *t << " ";
            t++;
        }
    }
    return 0;
}