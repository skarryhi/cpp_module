#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad() : count(0), squad(nullptr) {}
Squad::Squad(const Squad &other) {
    *this = other;
}
Squad::~Squad() {
    for(int i = 0; i <  this->count; i++)
        delete squad[i];
    delete [] squad;
}
Squad&          Squad::operator=(Squad const &other) {
    count = other.count;
    for(int i = 0; i <  this->count; i++)
        push(other.squad[i]->clone());
    return *this;
}

int             Squad::push(ISpaceMarine* newMarine) {
    if (!newMarine) {
        return count;
    }
    if (squad) {
        for (int i = 0; i < count; i++) {
            if (squad[i] == newMarine)
                return count;
        }
        ISpaceMarine **newSquad = new ISpaceMarine*[count + 1];
        for (int i = 0; i < count; i++)
            newSquad[i] = squad[i];
        newSquad[count] = newMarine;
        ++count;
        delete [] squad;
        squad = newSquad;
    }
    else {
        ++count;
        squad = new ISpaceMarine*[count];
        *squad = newMarine;
    }
    return count;
}

int             Squad::getCount() const {
    return count;
}

ISpaceMarine*   Squad::getUnit(int x) const {
    if (x < count && x >= 0)
        for (int i = 0; squad[i]; i++)
            if (x == i)
                return squad[i];
    return 0;
}