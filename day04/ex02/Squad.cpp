#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad() : count(0), squad(nullptr) {}
Squad::Squad(const Squad &other) {
    count = other.count;
    for(int i = 0; i <  this->count; i++)
        push(other.squad[i]);
}
Squad::~Squad() {
    for(int i = 0; i <  this->count; i++)
        delete squad[i];
    delete [] squad;
}
Squad&          Squad::operator=(Squad const &other) {
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