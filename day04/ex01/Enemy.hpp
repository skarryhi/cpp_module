#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
public:
                        Enemy(int hp, std::string const & type);
    virtual             ~Enemy();
    std::string const&  getType() const;
    int                 getHP() const;
    virtual void        takeDamage(int);
private:
                        Enemy();
    int                 hp;
    std::string         type;
};

#endif