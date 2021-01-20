#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array {
private:
    T*  array;
    int len;
public:
                Array() {
        array = new T[0];
        len = 0;
    }

                Array(unsigned int n) {
        array = new T[n];
        len = n;
    }

                Array(Array const& other) {
        array = new T[0];
        *this = other;
    }

                ~Array() {
        delete [] array;
    }

    class InvalidIndex : public std::exception {
        virtual const char* what() const throw() {
            return "Element not exist, invalid index!";
        }
    };

    Array&      operator=(Array const& other) {
        len = other.len;
        delete [] array;
        array = new Array[len];
        for (int i = 0; i < len; i++)
            array[i] = other.array[i];
        return *this;
    }
    
    T&          operator[](int i) {
        if (i < 0 || i >= len || len == 0)
            throw InvalidIndex();
        else
            return array[i];
    }

    int         size() {
        return len;
    }
};

#endif