#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
public:
                        Enemy(int hp, std::string const & type);
                        Enemy(Enemy const&);
    Enemy&              operator=(Enemy const&);
    virtual             ~Enemy();
    std::string const&  getType() const;
    int                 getHP() const;
    virtual void        takeDamage(int);
protected:
                        Enemy();
    int                 hp;
    std::string         type;
};

#endif