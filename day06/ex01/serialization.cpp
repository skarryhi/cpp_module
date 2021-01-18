#include <iostream>
#include <string>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

std::string alfnum("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890");

void*   serialize(void) {
    char*    str = new char[20];
    for (int i = 0; i < 8; i++) {
        str[i] = alfnum[rand() % 62];
    }
    *reinterpret_cast<int*>(str + 8) = rand();
    for (int i = 12; i < 20; i++) {
        str[i] = alfnum[rand() % 62];
    }
    return str;
}

Data * deserialize(void * raw);

int     main() {
    std::srand(time(0));
    void*   pointer;

    pointer = serialize();
    return 0;
}