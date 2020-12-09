#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
public:
                            Sorcerer(std::string const &, std::string const &);
                            Sorcerer(Sorcerer const &);
                            ~Sorcerer(); 
    Sorcerer&               operator=(Sorcerer const &);
    void                    polymorph(Victim const &);
    std::string const&      getName() const;
    std::string const&      getTitle() const;
private:
                            Sorcerer();
    std::string             name;
    std::string             title;
};
std::ostream& operator<<(std::ostream &out, const Sorcerer &point);

#endif