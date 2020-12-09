#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {
public:
                            Victim(std::string const &);
                            Victim(Victim const &);
                            ~Victim();
    Victim&                 operator=(Victim const &);
    virtual void                    getPolymorphed() const;
    std::string const&      getName() const;
protected:
                            Victim();
    std::string             name;
};
std::ostream& operator<<(std::ostream &out, const Victim &point);

#endif