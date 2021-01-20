#ifndef EASY_HPP
#define EASY_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator       easyfind(T & data, int n) {
    typename T::iterator it;
    it = std::find(data.begin(), data.end(), n);
    if (it == data.end())
        throw std::exception();
    return it;
}


#endif