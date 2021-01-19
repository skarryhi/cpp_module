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

Data*   deserialize(void* raw) {
    Data* data = new Data;
    char* str = static_cast<char*>(raw);
    data->s1.assign(str, 8);
    data->n = *reinterpret_cast<int*>(str + 8);
    data->s2.assign(str + 12, 8);
    return data;
}

int     main() {
    std::srand(time(0));
    void*   pointer;

    pointer = serialize();
    std::cout << "void*: " << pointer << std::endl;
    Data* data = deserialize(pointer);
    std::cout << "s1: \"" << data->s1 << "\" n: " << data->n << " s2: \"" << data->s2 << "\"" << std::endl;
    return 0;
}