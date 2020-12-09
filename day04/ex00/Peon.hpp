#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim {
public:
            Peon(std::string const &);
            Peon(Peon const &);
            ~Peon();
    Peon&   operator=(Peon const &);
    virtual void    getPolymorphed() const;
private:
            Peon();
};
std::ostream& operator<<(std::ostream &out, const Peon &point);

#endif