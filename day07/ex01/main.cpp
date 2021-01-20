#include <iostream>
#include "iter.hpp"

template <typename T>
void    incr(T & i) {i++;}

int     main() {
    {
        int arr[3] = {2, 3, 7};
        ::iter(arr, 3, incr);
        for (int i = 0; i < 3; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    {
        char arr[3] = {'b', 'g', 'd'};
        ::iter(arr, 3, incr);
        for (int i = 0; i < 3; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    {
        float arr[3] = {2.65, 3.56, 7.34};
        ::iter(arr, 3, incr);
        for (int i = 0; i < 3; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    return 0;
}