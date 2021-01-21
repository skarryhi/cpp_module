#ifndef MUTANT_HPP
#define MUTANT_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
                        MutantStack() : std::stack<T>() {}

                        MutantStack(MutantStack const& other) : std::stack<T>(other) {}

        virtual         ~MutantStack() {}

        MutantStack&    operator=(MutantStack const& other) {
            *this = other;
            return(*this);
        }

    class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
    private:
        T*  mutant;
    public:
        iterator() : mutant(nullptr) {}

        iterator(T *pointer) : mutant(pointer) {}

        ~iterator() {}

        iterator(iterator const& other) {*this = other;}

        iterator&    operator=(iterator const& other) {
            mutant = other.mutant;
            return(*this);
        }

        bool        operator==(iterator const& other) {return other.mutant == mutant;}
        
        bool        operator!=(iterator const& other) {return other.mutant != mutant;}

        iterator&   operator--() {
            ++mutant;
            return *this;
        }

        iterator&   operator++() {
            --mutant;
            return *this;
        }

        iterator  operator++(int) {
            iterator mut = *this;
            operator++();
            return mut;
        }

        iterator  operator--(int) {
            iterator mut = *this;
            operator--();
            return mut;
        }

        T&	operator*() {return *this->mutant;}
    };

    iterator begin() {return(iterator(&this->top()));}
    
    iterator end() {return(iterator(&this->top() - this->size()));}
};


#endif